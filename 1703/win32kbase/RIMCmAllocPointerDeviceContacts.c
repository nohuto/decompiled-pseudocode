/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1C00089D4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C010B2C0 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     RIMCmFreePointerDeviceContacts @ 0x1C0009650 (RIMCmFreePointerDeviceContacts.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMCmAllocPointerDeviceContacts(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int i; // ecx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  _QWORD *v12; // rax
  _QWORD *v13; // r9

  v1 = *(unsigned int *)(a1 + 696);
  v2 = 0;
  if ( (unsigned int)v1 > 0xA )
    *(_DWORD *)(a1 + 1568) = 10;
  else
    *(_DWORD *)(a1 + 1568) = v1;
  v4 = Win32AllocPoolZInit(2760 * v1);
  *(_QWORD *)(a1 + 1536) = v4;
  if ( v4 && (v5 = Win32AllocPoolZInit(16LL * *(unsigned int *)(a1 + 1568)), (*(_QWORD *)(a1 + 1560) = v5) != 0LL) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 1568); *v8 = v8 )
    {
      v7 = i++;
      v8 = (_QWORD *)(*(_QWORD *)(a1 + 1560) + 16 * v7);
      v8[1] = v8;
    }
    v9 = a1 + 1544;
    *(_QWORD *)(a1 + 1552) = a1 + 1544;
    *(_QWORD *)(a1 + 1544) = a1 + 1544;
    v10 = *(_DWORD *)(a1 + 696);
    v11 = *(_DWORD *)(a1 + 24) == 7;
    while ( v11 < v10 )
    {
      v12 = *(_QWORD **)(a1 + 1552);
      v13 = (_QWORD *)(2760LL * v11 + *(_QWORD *)(a1 + 1536) + 16LL);
      if ( *v12 != v9 )
        __fastfail(3u);
      *v13 = v9;
      ++v11;
      v13[1] = v12;
      *v12 = v13;
      *(_QWORD *)(a1 + 1552) = v13;
    }
  }
  else
  {
    v2 = -1073741670;
    RIMCmFreePointerDeviceContacts(a1);
  }
  return v2;
}
