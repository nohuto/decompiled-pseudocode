/*
 * XREFs of KiPreprocessFault @ 0x1401311D8
 * Callers:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x1401319AC (KiOpDecode.c)
 *     KiOpPreprocessAccessViolation @ 0x140131CBC (KiOpPreprocessAccessViolation.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiOpPreprocessSecureFault @ 0x140241180 (KiOpPreprocessSecureFault.c)
 *     KiCheckForAtlThunk @ 0x14024B574 (KiCheckForAtlThunk.c)
 */

char __fastcall KiPreprocessFault(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  bool v10; // cf
  int v11; // esi
  int v12; // eax
  __int64 v13; // rbp
  char v14; // di
  int v16; // ecx
  _BYTE v17[88]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+88h] [rbp-20h]
  char v19; // [rsp+90h] [rbp-18h]
  char v20; // [rsp+91h] [rbp-17h]

  v6 = *(_DWORD *)a1 - 268435457;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      v11 = 0x40000000;
      *(_DWORD *)a1 = -1073741795;
      goto LABEL_8;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v11 = 0x20000000;
      *(_DWORD *)a1 = -1073741676;
      goto LABEL_8;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
LABEL_5:
      if ( !(unsigned __int8)KiOpPreprocessAccessViolation(a1, a2) )
      {
        v10 = *(_DWORD *)(a1 + 24) < 2u;
        v11 = 0x10000000;
        *(_DWORD *)a1 = -1073741819;
        if ( v10 || (*(_BYTE *)(a1 + 32) & 8) == 0 )
          goto LABEL_8;
        if ( a3 )
        {
          v11 = 0x8000000;
          goto LABEL_8;
        }
        return 0;
      }
      return 1;
    }
    v16 = v9 - 2;
    if ( !v16 )
    {
      if ( (unsigned __int8)KiOpPreprocessSecureFault(a1, a2) )
        return 1;
      goto LABEL_5;
    }
    if ( v16 != 1 )
      return 0;
    v11 = 0x4000000;
  }
  else
  {
    v11 = 0x80000000;
  }
  *(_DWORD *)a1 = -1073741819;
LABEL_8:
  v12 = KiOpDecode(a1, a2, a3, v11, v17);
  if ( v12 < 0 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = v18;
    if ( v18 )
      v12 = (*(__int64 (__fastcall **)(_BYTE *))(v18 + 16))(v17);
  }
  v14 = 0;
  if ( v12 < 0 || !v13 || (v14 = v19) == 0 )
  {
    if ( v11 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !v20 )
      {
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)(a1 + 40) = -1LL;
      }
    }
    else if ( v11 == 0x8000000 && (int)KiCheckForAtlThunk(v17) >= 0 )
    {
      return v19;
    }
  }
  return v14;
}
