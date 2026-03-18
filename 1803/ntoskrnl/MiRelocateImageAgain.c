/*
 * XREFs of MiRelocateImageAgain @ 0x1404F16CC
 * Callers:
 *     MiValidateExistingImage @ 0x1404F12F4 (MiValidateExistingImage.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x14003E604 (MiGetControlAreaLoadConfig.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C674 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C874 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiImageUnused @ 0x1400C0580 (MiImageUnused.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x1404F18A8 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1404F1960 (MiSelectImageBase.c)
 *     MiSwitchBaseAddress @ 0x1404F1E74 (MiSwitchBaseAddress.c)
 *     MiReturnImageBase @ 0x1405937FC (MiReturnImageBase.c)
 *     SeSetImageBaseAddress @ 0x14078C364 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // r13d
  ULONG_PTR v8; // rsi
  int updated; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ControlAreaLoadConfig; // rax
  __int64 v14; // rbp
  __int64 v15; // rcx
  unsigned int SessionId; // eax
  _QWORD v17[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD *)(v2 + 32);
  if ( !v5 )
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
    v8 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
    if ( v8 )
    {
      updated = MiSelectImageBase(v5, v6, a2, 0, (__int64)&v18);
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
LABEL_10:
            updated = 0;
            goto LABEL_3;
          }
          if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
            updated = SeSetImageBaseAddress(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v14);
          if ( updated >= 0 )
          {
            if ( !a2 )
            {
              SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
              v14 = v18;
              v7 = SessionId;
            }
            MiSwitchBaseAddress(a1, v14, v8, v7);
            goto LABEL_10;
          }
        }
        MiImageUnused(a1, 0, (__int64)v17);
      }
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5, v10, v11);
  if ( v8 )
    MiReleasePtes((__int64)&qword_1403CC5E0, v8, 1uLL);
  MiReturnImageBase(v17);
  return (unsigned int)updated;
}
