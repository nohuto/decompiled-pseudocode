/*
 * XREFs of MiRelocateImageAgain @ 0x140511290
 * Callers:
 *     MiValidateExistingImage @ 0x14051108C (MiValidateExistingImage.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x140025C34 (MiGetControlAreaLoadConfig.c)
 *     MiImageUnused @ 0x140027AFC (MiImageUnused.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14005EBD4 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14005EC2C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiSwitchBaseAddress @ 0x1404499D4 (MiSwitchBaseAddress.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x140495C30 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x140495CE8 (MiSelectImageBase.c)
 *     MiReturnImageBase @ 0x140513EE8 (MiReturnImageBase.c)
 *     SeSetImageBaseAddress @ 0x1406F04F4 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // r13d
  _QWORD *v8; // rsi
  int updated; // edi
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 ControlAreaLoadConfig; // rax
  __int64 v14; // rbp
  __int64 *v15; // rcx
  unsigned int SessionId; // eax
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v2 = *(__int64 **)(a1 + 96);
  v5 = *v2;
  if ( !*v2 )
    return 0LL;
  v6 = *(_QWORD *)a1;
  v17[0] = 0xFFFFFFFFLL;
  v7 = -1;
  v17[1] = 0LL;
  v8 = 0LL;
  updated = 0;
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( (*(_DWORD *)(a1 + 92) & 0x800000) == 0 )
  {
    v19 = *(_QWORD *)(v6 + 32);
    v8 = (_QWORD *)MiReservePtes((__int64)&qword_14036D0A0, 1uLL, v10);
    if ( v8 )
    {
      updated = MiSelectImageBase(v5, v6, a2, 0LL, &v18);
      if ( updated >= 0 )
      {
        *(_DWORD *)(a1 + 92) |= 0x800000u;
        ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
        v14 = v18;
        updated = MiUpdateCfgSystemWideBitmap(v15, v18, ControlAreaLoadConfig);
        if ( updated >= 0 )
        {
          if ( v14 == v19 )
          {
LABEL_11:
            updated = 0;
            goto LABEL_3;
          }
          if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
            updated = SeSetImageBaseAddress(v2[1] & 0xFFFFFFFFFFFFFFF8uLL, v14);
          if ( updated >= 0 )
          {
            if ( !a2 )
            {
              SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
              v14 = v18;
              v7 = SessionId;
            }
            MiSwitchBaseAddress((__int64 *)a1, v14, (__int64)v8, v7);
            goto LABEL_11;
          }
        }
        MiImageUnused(a1, 0, (__int64)v17);
      }
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( v8 )
    MiReleasePtes((__int64)&qword_14036D0A0, v8, 1u);
  MiReturnImageBase(v17, v11);
  return (unsigned int)updated;
}
