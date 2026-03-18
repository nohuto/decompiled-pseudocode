/*
 * XREFs of CmpQueryKeyDataFromNode @ 0x1404FEEE0
 * Callers:
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmpQueryKeyData @ 0x1405006A4 (CmpQueryKeyData.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpPopulateFullInformation @ 0x1404461E4 (CmpPopulateFullInformation.c)
 *     CmGetKeyLastWriteTime @ 0x1404470EC (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleValueCount @ 0x14044B9DC (CmGetVisibleValueCount.c)
 *     CmListGetPrevElement @ 0x140451764 (CmListGetPrevElement.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x1404CFF48 (CmGetVisibleSubkeyCount.c)
 *     CmpPopulateNodeInformation @ 0x1404D2B6C (CmpPopulateNodeInformation.c)
 *     CmGetVisibleMaxValueNameLenAndDataLen @ 0x1404FD1F0 (CmGetVisibleMaxValueNameLenAndDataLen.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404FD280 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpPopulateBasicInformation @ 0x1404FF110 (CmpPopulateBasicInformation.c)
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
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 PrevElement; // rax
  __int64 v16; // r13
  int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  _BYTE v20[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v22[6]; // [rsp+50h] [rbp-30h] BYREF

  v12 = 0LL;
  HvpGetCellContextReinitialize((__int64)v20);
  memset(v22, 0, sizeof(v22));
  if ( !a3 )
  {
    v21 = 0LL;
    if ( a2 )
    {
      v13 = *(_QWORD *)(a2 + 4);
      if ( !a7 )
      {
LABEL_4:
        v22[0] = v13;
        LODWORD(v22[1]) = 0;
        return CmpPopulateBasicInformation((unsigned int)v22, a2, a4, a5, (__int64)a6);
      }
    }
    else
    {
      v13 = *(_QWORD *)(a7 + 160);
    }
    if ( a8 )
    {
      while ( 1 )
      {
        PrevElement = CmListGetPrevElement(a7 + 200, &v21);
        v16 = PrevElement;
        if ( !PrevElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(PrevElement + 56), a8) && *(_DWORD *)(v16 + 68) == 8 )
        {
          v13 = *(_QWORD *)(v16 + 88);
          goto LABEL_4;
        }
      }
    }
    goto LABEL_4;
  }
  v17 = a3 - 1;
  if ( !v17 )
  {
    v22[0] = CmGetKeyLastWriteTime(a7, a2, a8);
    LODWORD(v22[1]) = 0;
    if ( *(_WORD *)(a2 + 74) )
      v12 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(a2 + 48),
                            v20);
    v18 = CmpPopulateNodeInformation((__int64)v22, a2, v12, *(unsigned __int16 *)(a2 + 74), a4, a5, a6);
LABEL_13:
    v19 = v18;
    if ( v12 )
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 16))(a1, v20);
    return v19;
  }
  if ( v17 != 1 )
    return 3221225485LL;
  v22[0] = CmGetKeyLastWriteTime(a7, a2, a8);
  LODWORD(v22[1]) = 0;
  result = CmGetVisibleMaxNameLenAndClassLen(a7, a2, a8, (unsigned int *)&v22[3], (unsigned int *)&v22[3] + 1);
  if ( (int)result >= 0 )
  {
    result = CmGetVisibleMaxValueNameLenAndDataLen(a7, a2, a8, (_DWORD *)&v22[4] + 1, (unsigned int *)&v22[5]);
    if ( (int)result >= 0 )
    {
      HIDWORD(v22[2]) = CmGetVisibleSubkeyCount(a7, a2, a8);
      LODWORD(v22[4]) = CmGetVisibleValueCount(a7, a2, a8);
      if ( *(_WORD *)(a2 + 74) )
        v12 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(a1 + 8))(
                              a1,
                              *(unsigned int *)(a2 + 48),
                              v20);
      v18 = CmpPopulateFullInformation((__int64)v22, v12, *(unsigned __int16 *)(a2 + 74), a4, a5, a6);
      goto LABEL_13;
    }
  }
  return result;
}
