/*
 * XREFs of ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18008B08C
 * Callers:
 *     ??1CFlickVisual@@MEAA@XZ @ 0x18008DC74 (--1CFlickVisual@@MEAA@XZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008DE0C (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x18008E260 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x18008E310 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x180078C94 (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJPEFBUCFlickTextFeedback@@I@Z @ 0x180088F34 (-AddMultipleAndSet@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJPEFBUCFlickTextFeedback@@I@Z.c)
 */

__int64 __fastcall CContactManager::PostFlickFeedbackUpdate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int8 a5)
{
  LPARAM v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rax
  WPARAM v11; // r8
  __int64 v13; // rcx
  _DWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v6 = a2;
  v7 = *(_DWORD *)(a1 + 208);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 184);
    while ( *(_DWORD *)(v9 + 24 * v8) != a2 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        goto LABEL_5;
    }
    if ( (int)v8 >= 0 )
    {
      v13 = 3 * v8;
      *(_QWORD *)(v9 + 8 * v13 + 8) = *a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 8 * v13 + 4) = a3;
      v11 = a5;
      goto LABEL_7;
    }
  }
LABEL_5:
  if ( a5 )
  {
    v10 = *a4;
    v16 = 0LL;
    v15 = v10;
    v14[0] = a2;
    v14[1] = a3;
    DynArray<CFlickTextFeedback,0>::AddMultipleAndSet(a1 + 184, (__int64)v14, a3);
    v11 = a5;
LABEL_7:
    CDesktopManager::PostEventMessage((HANDLE *)CDesktopManager::s_pDesktopManagerInstance, 0x407u, v11, v6);
  }
  return 0LL;
}
