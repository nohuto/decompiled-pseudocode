/*
 * XREFs of CmpFindDrivers @ 0x1408B97B4
 * Callers:
 *     CmGetSystemDriverList @ 0x1408B7D44 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1404AD3B0 (CmpFindSubKeyByNumber.c)
 *     CmpLoadServicesNode @ 0x1408B82FC (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x1408B839C (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x1408B8DEC (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1408B9900 (CmpIsLoadType.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1408DDC18 (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        int a4,
        const UNICODE_STRING *a5,
        unsigned int a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v14; // r12d
  int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // r14
  unsigned int GroupOrderList; // r12d
  unsigned int v19; // esi
  unsigned int v20; // r15d
  const UNICODE_STRING *v21; // r15
  const UNICODE_STRING *i; // rsi
  unsigned int v24; // r15d
  unsigned int v25; // r13d
  ULONG_PTR v26; // rcx
  PCUNICODE_STRING Source; // [rsp+20h] [rbp-30h]
  char v28; // [rsp+30h] [rbp-20h]
  char v29; // [rsp+30h] [rbp-20h]
  __int64 v30; // [rsp+38h] [rbp-18h]
  _DWORD v31[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v32; // [rsp+48h] [rbp-8h] BYREF

  a11 = 0xFFFFFFFFLL;
  a9 = 0xFFFFFFFFLL;
  v31[0] = -1;
  v31[1] = 0;
  v14 = a2;
  if ( !CmpLoadServicesNode(BugCheckParameter3, a2, (__int64 *)&v32, (__int64)v31) )
    return 0;
  v15 = a10;
  v16 = 0LL;
  v17 = 0LL;
  a7 = 0LL;
  if ( !a10 )
    goto LABEL_3;
  if ( a3 )
  {
    if ( (unsigned __int8)CmpLoadManufacturingProfileServicesNode(a3, a4, a10, (unsigned int)&a7, (__int64)&a9) )
    {
      v16 = (__int64)a7;
      v17 = a3;
      if ( a7 )
        goto LABEL_3;
    }
    else
    {
      a7 = 0LL;
    }
  }
  if ( (unsigned __int8)CmpLoadManufacturingProfileServicesNode(
                          BugCheckParameter3,
                          v14,
                          v15,
                          (unsigned int)&a7,
                          (__int64)&a9) )
  {
    v16 = (__int64)a7;
    v17 = BugCheckParameter3;
  }
  else
  {
    v16 = 0LL;
  }
LABEL_3:
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v14);
  if ( GroupOrderList == -1 )
    return 0;
  v19 = 0;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v32, v19, &a6);
    v20 = a6;
    ++v19;
    if ( a6 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, (__int64)Source, v17, v16, v30) )
      CmpAddDriverToList(BugCheckParameter3, v20, BugCheckParameter3, GroupOrderList, &CmpSystemHiveName, a8, v28);
  }
  v21 = a5;
  if ( a5 )
  {
    for ( i = *(const UNICODE_STRING **)&a5->Length; i != v21; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( CmpLoadServicesNode(*(_QWORD *)&i[2].Length, LODWORD(i[2].Buffer), (__int64 *)&a7, (__int64)&a11) )
      {
        v24 = 0;
        while ( 1 )
        {
          CmpFindSubKeyByNumber(*(_QWORD *)&i[2].Length, a7, v24, &a6);
          v25 = a6;
          ++v24;
          v26 = *(_QWORD *)&i[2].Length;
          if ( a6 == -1 )
            break;
          if ( (unsigned __int8)CmpIsLoadType(v26, (__int64)Source, v17, v16, v30) )
            CmpAddDriverToList(*(_QWORD *)&i[2].Length, v25, BugCheckParameter3, GroupOrderList, i + 1, a8, v29);
        }
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v26 + 16))(v26, &a11);
        v21 = a5;
      }
    }
  }
  if ( v17 && v16 )
    (*(void (__fastcall **)(__int64, __int64 *))(v17 + 16))(v17, &a9);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v31);
  return 1;
}
