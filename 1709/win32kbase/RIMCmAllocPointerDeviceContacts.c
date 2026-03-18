/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1C00904D0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C010A390 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     RIMCmFreePointerDeviceContacts @ 0x1C000B740 (RIMCmFreePointerDeviceContacts.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMCmAllocPointerDeviceContacts(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  unsigned int v4; // esi
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  void *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  __int64 **v16; // rax
  __int64 *v17; // r9

  v2 = *(unsigned int *)(a1 + 680);
  v3 = 0;
  v4 = a2;
  if ( (unsigned int)v2 > 0xA )
    *(_DWORD *)(a1 + 904) = 10;
  else
    *(_DWORD *)(a1 + 904) = v2;
  v6 = Win32AllocPoolZInit(2760 * v2, a2);
  *(_QWORD *)(a1 + 872) = v6;
  if ( v6 && (v9 = Win32AllocPoolZInit(16LL * *(unsigned int *)(a1 + 904), v4), (*(_QWORD *)(a1 + 896) = v9) != 0LL) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 904); *v12 = v12 )
    {
      v11 = i++;
      v12 = (_QWORD *)(*(_QWORD *)(a1 + 896) + 16 * v11);
      v12[1] = v12;
    }
    v13 = a1 + 880;
    *(_QWORD *)(a1 + 888) = a1 + 880;
    *(_QWORD *)(a1 + 880) = a1 + 880;
    v14 = *(_DWORD *)(a1 + 680);
    v15 = *(_DWORD *)(a1 + 24) == 7;
    while ( v15 < v14 )
    {
      v16 = *(__int64 ***)(a1 + 888);
      v17 = (__int64 *)(2760LL * v15 + *(_QWORD *)(a1 + 872) + 16LL);
      if ( *v16 != (__int64 *)v13 )
        __fastfail(3u);
      *v17 = v13;
      ++v15;
      v17[1] = (__int64)v16;
      *v16 = v17;
      *(_QWORD *)(a1 + 888) = v17;
    }
  }
  else
  {
    RIMCmFreePointerDeviceContacts(a1, v7, v8);
    return (unsigned int)-1073741670;
  }
  return v3;
}
