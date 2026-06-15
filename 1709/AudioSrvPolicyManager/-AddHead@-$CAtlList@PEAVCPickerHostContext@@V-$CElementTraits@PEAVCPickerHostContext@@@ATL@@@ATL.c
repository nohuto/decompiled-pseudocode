/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPickerHostContext@@@Z @ 0x1800177B4
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180016D74 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::AddHead(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v4; // rbx
  int v5; // r9d
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 *i; // rcx
  __int64 v11; // rcx
  __int64 *result; // rax

  v2 = (__int64 *)qword_18003A598;
  v4 = PickerHostContextManager::s_PickerHostContextList;
  if ( qword_18003A598 )
    goto LABEL_13;
  v5 = qword_18003A5A0;
  if ( (_DWORD)qword_18003A5A0 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)qword_18003A5A0 < 0x18 )
    {
LABEL_9:
      v8 = 0LL;
      goto LABEL_10;
    }
    v6 = 24LL * (unsigned int)qword_18003A5A0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (unsigned __int64)~v6 < 8 )
    goto LABEL_9;
  v7 = malloc(v6 + 8);
  v8 = v7;
  if ( !v7 )
    goto LABEL_19;
  *v7 = qword_18003A590;
  v5 = qword_18003A5A0;
  v2 = (__int64 *)qword_18003A598;
  qword_18003A590 = (__int64)v7;
LABEL_10:
  if ( !v8 )
LABEL_19:
    ATL::AtlThrowImpl(-2147024882);
  v9 = v5 - 1;
  for ( i = &v8[2 * (v5 - 1) + 1 + (unsigned int)(v5 - 1)]; v9 >= 0; --v9 )
  {
    *i = (__int64)v2;
    v2 = i;
    qword_18003A598 = (__int64)i;
    i -= 3;
  }
LABEL_13:
  v11 = *v2;
  if ( v2 )
    v2[2] = *a2;
  qword_18003A598 = v11;
  v2[1] = 0LL;
  *v2 = v4;
  ++qword_18003A588;
  if ( PickerHostContextManager::s_PickerHostContextList )
    *(_QWORD *)(PickerHostContextManager::s_PickerHostContextList + 8) = v2;
  else
    qword_18003A580 = (__int64)v2;
  result = v2;
  PickerHostContextManager::s_PickerHostContextList = (__int64)v2;
  return result;
}
