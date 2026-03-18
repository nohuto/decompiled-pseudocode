/*
 * XREFs of VmAccessFault @ 0x1402519D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     memset @ 0x140192D80 (memset.c)
 *     VmpFaultEntryInsert @ 0x140251D30 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140251DF0 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockShared @ 0x140252504 (VmpProcessContextLockShared.c)
 *     HvlMapGpaPages @ 0x140269DC4 (HvlMapGpaPages.c)
 *     MmVirtualAccessFault @ 0x1406B83CC (MmVirtualAccessFault.c)
 */

__int64 __fastcall VmAccessFault(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v7; // rbx
  int v8; // ecx
  int v9; // r12d
  int v10; // eax
  unsigned int v11; // edi
  __int64 i; // rdx
  __int64 v13; // rsi
  int v14; // edi
  __int64 v15; // rcx
  int v16; // r8d
  int v18; // [rsp+30h] [rbp-40h]
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v20[8]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v21[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+30h] BYREF

  v4 = a1 >> 12;
  v7 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[13];
  if ( !v7 )
    NT_ASSERT("ProcessContext != ((void *)0)");
  if ( a2 > 0x7FFFFFFEFFFFLL )
    NT_ASSERT("SystemVirtualAddress <= MmHighestUserAddress");
  v8 = a3 & 1 | 2;
  v9 = a3 & 2;
  if ( (a3 & 2) == 0 )
    v8 = a3 & 1;
  v18 = a3 & 4;
  v10 = v8 | 1;
  if ( (a3 & 4) == 0 )
    v10 = v8;
  v11 = v10 | 8;
  if ( (a3 & 8) == 0 )
    v11 = v10;
  LODWORD(v22) = v11;
  memset(v21, 0, sizeof(v21));
  v21[3] = a2 >> 12;
  VmpFaultEntryInsert(v7, v21);
  for ( i = v11; ; i = (unsigned int)v22 )
  {
    v14 = MmVirtualAccessFault(a2, i, &v19);
    if ( v14 < 0 )
      break;
    if ( !v21[4] )
    {
      v13 = VmpProcessContextLockShared(v7);
      if ( *(_QWORD *)(v7 + 72) != a4 )
      {
        v14 = -1073741558;
LABEL_23:
        if ( v13 != -1 )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v7);
          __writecr8((unsigned __int8)v13);
        }
        break;
      }
      if ( !v21[4] )
      {
        v15 = *(_QWORD *)(v7 + 72);
        v22 = v19;
        v16 = (v9 != 0 ? 3 : 1) | 0xC;
        if ( !v18 )
          v16 = v9 != 0 ? 3 : 1;
        HvlMapGpaPages(v15, v4, v16, 1, (__int64)&v22, (__int64)v20);
        v14 = 0;
        goto LABEL_23;
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v7);
      __writecr8((unsigned __int8)v13);
    }
    v21[4] = 0LL;
  }
  VmpFaultEntryRemove(v7, v21);
  return (unsigned int)v14;
}
