/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x140482830
 * Callers:
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmpQueryKeyData @ 0x140569E70 (CmpQueryKeyData.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmGetVisibleSubkeyCount @ 0x140472B8C (CmGetVisibleSubkeyCount.c)
 *     CmpPopulateNodeInformation @ 0x1404742E8 (CmpPopulateNodeInformation.c)
 *     CmpPopulateBasicInformation @ 0x140482A60 (CmpPopulateBasicInformation.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x14056A1E4 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmListGetPrevElement @ 0x14056A340 (CmListGetPrevElement.c)
 *     CmpPopulateFullInformation @ 0x140584390 (CmpPopulateFullInformation.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140584EDC (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetKeyLastWriteTime @ 0x1405851E4 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleValueCount @ 0x14058A720 (CmGetVisibleValueCount.c)
 */

__int64 __fastcall CmpQueryKeyDataFromNode(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        __int64 a7,
        __int64 a8)
{
  const void *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 PrevElement; // rax
  __int64 v18; // r13
  int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // ebx
  _BYTE v22[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v24[6]; // [rsp+50h] [rbp-30h] BYREF

  v12 = 0LL;
  HvpGetCellContextReinitialize((__int64)v22);
  memset(v24, 0, sizeof(v24));
  if ( !a3 )
  {
    v23 = 0LL;
    if ( a2 )
    {
      v15 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v24[0] = v15;
        LODWORD(v24[1]) = 0;
        return CmpPopulateBasicInformation((unsigned int)v24, a2, a4, a5, (__int64)a6);
      }
    }
    else
    {
      v15 = *(_QWORD *)(a7 + 160);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(a7 + 200, &v23, v13, v14);
        v18 = PrevElement;
        if ( !PrevElement )
          break;
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56)) && *(_DWORD *)(v18 + 68) == 8 )
        {
          v15 = *(_QWORD *)(v18 + 88);
          goto LABEL_4;
        }
      }
    }
    goto LABEL_4;
  }
  v19 = a3 - 1;
  if ( !v19 )
  {
    v24[0] = CmGetKeyLastWriteTime(a7, a2, a8);
    LODWORD(v24[1]) = 0;
    if ( *(_WORD *)(a2 + 74) )
      v12 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(a2 + 48),
                            v22);
    v20 = CmpPopulateNodeInformation((__int64)v24, a2, v12, *(unsigned __int16 *)(a2 + 74), a4, a5, a6);
LABEL_13:
    v21 = v20;
    if ( v12 )
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 16))(a1, v22);
    return v21;
  }
  if ( v19 != 1 )
    return 3221225485LL;
  v24[0] = CmGetKeyLastWriteTime(a7, a2, a8);
  LODWORD(v24[1]) = 0;
  result = CmGetVisibleMaxNameLenAndClassLen(a7, a2, a8, (unsigned int)&v24[3], (__int64)&v24[3] + 4);
  if ( (int)result >= 0 )
  {
    result = CmGetVisibleMaxValueNameLenAndDataLen(a7, a2, a8, (unsigned int)&v24[4] + 4, (__int64)&v24[5]);
    if ( (int)result >= 0 )
    {
      HIDWORD(v24[2]) = CmGetVisibleSubkeyCount(a7, a2, a8);
      LODWORD(v24[4]) = CmGetVisibleValueCount(a7, a2, a8);
      if ( *(_WORD *)(a2 + 74) )
        v12 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(a1 + 8))(
                              a1,
                              *(unsigned int *)(a2 + 48),
                              v22);
      v20 = CmpPopulateFullInformation(v24, v12, *(unsigned __int16 *)(a2 + 74), a4, a5, a6);
      goto LABEL_13;
    }
  }
  return result;
}
