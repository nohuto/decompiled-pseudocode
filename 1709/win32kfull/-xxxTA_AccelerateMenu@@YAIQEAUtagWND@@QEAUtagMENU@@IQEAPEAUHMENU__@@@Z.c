/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C013E248
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C00FC58C (xxxTranslateAccelerator.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0077DF8 (MNLookUpItem.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C013E2AC (-UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(
        __int64 *BugCheckParameter2,
        struct tagMENU *const a2,
        unsigned int a3,
        HMENU *const a4)
{
  unsigned int TopLevelMenuIndex; // eax
  struct _LARGE_STRING *v9; // rsi
  unsigned int v10; // edi
  unsigned __int64 v12; // r8
  HMENU *v13; // r8
  HMENU v14; // r8
  __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // [rsp+88h] [rbp+10h] BYREF

  if ( !a2 )
    goto LABEL_3;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(a2, a3);
  v9 = (struct _LARGE_STRING *)TopLevelMenuIndex;
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_3;
  v12 = *(_QWORD *)a2;
  v10 = 2;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(BugCheckParameter2, 278LL, v12, 0LL, 0, 0, 0LL, 1u, 1);
  if ( (unsigned int)v9 >= *((_DWORD *)a2 + 17) )
    goto LABEL_3;
  v13 = *(HMENU **)(*((_QWORD *)a2 + 12) + 152LL * (int)v9 + 16);
  if ( v13 )
  {
    v14 = *v13;
    *a4 = v14;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(BugCheckParameter2, 279LL, (unsigned __int64)v14, v9, 0, 0, 0LL, 1u, 1);
    if ( (unsigned int)v9 >= *((_DWORD *)a2 + 17) )
      goto LABEL_3;
  }
  v15 = MNLookUpItem((__int64)a2, a3, 0, &v17);
  if ( !v15 )
  {
LABEL_3:
    *a4 = 0LL;
    return 0;
  }
  else if ( (*(_DWORD *)(v15 + 4) & 3) != 0 || v16 )
  {
    return 3;
  }
  return v10;
}
