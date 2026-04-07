/*
 * XREFs of ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18001387C
 * Callers:
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008D720 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008D924 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z @ 0x180074F5C (-AddMultipleAndSet@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJPEFBULivePreviewVisual@@I@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x180078C94 (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 */

__int64 __fastcall CContactManager::PostKeystateFeedbackUpdate(
        CContactManager *this,
        unsigned int a2,
        int a3,
        const struct tagPOINT *a4,
        bool a5)
{
  __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // r10
  struct tagPOINT v9; // rax
  unsigned __int64 v10; // r8
  __int64 v12; // rdi
  __int64 v13; // rdx
  _DWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]
  struct tagPOINT v17; // [rsp+34h] [rbp-24h]
  __int64 v18; // [rsp+40h] [rbp-18h]

  v6 = a2;
  v7 = *((_DWORD *)this + 60);
  v8 = 0LL;
  if ( v7 )
  {
    v12 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v12 + 40 * v8) != a2 )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        goto LABEL_2;
    }
    if ( (int)v8 >= 0 )
    {
      v13 = 5 * v8;
      *(_QWORD *)(v12 + 8 * v13 + 20) = *(_QWORD *)(v12 + 40 * v8 + 8);
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v13 + 16) = *(_DWORD *)(*((_QWORD *)this + 27) + 40 * v8 + 4);
      *(struct tagPOINT *)(*((_QWORD *)this + 27) + 8 * v13 + 8) = *a4;
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v13 + 4) = a3;
      v10 = a5;
      goto LABEL_4;
    }
  }
LABEL_2:
  if ( a5 )
  {
    v9 = *a4;
    v18 = 0LL;
    v15 = v9;
    v17 = v9;
    v14[0] = a2;
    v14[1] = a3;
    v16 = a3;
    DynArray<LivePreviewVisual,0>::AddMultipleAndSet((char *)this + 216, v14);
    v10 = a5;
LABEL_4:
    CDesktopManager::PostEventMessage(CDesktopManager::s_pDesktopManagerInstance, 0x408u, v10, v6);
  }
  return 0LL;
}
