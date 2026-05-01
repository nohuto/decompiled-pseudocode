/*
 * XREFs of ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x1802F7188
 * Callers:
 *     ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x1802F72E8 (-_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z @ 0x1802F6C28 (-_PaintAutoGutter@CDropFeedbackItem@@AEAAXPEAUIDCompThumbnail@@W4AutoGutterSide@@@Z.c)
 *     ?_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z @ 0x1802F6C64 (-_RegisterAutoGutter@CDropFeedbackItem@@AEAAJW4AutoGutterSide@@AEBUCRect@Geometry@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::_UpdateAutoGutter(__int64 a1, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 *v9; // rbx
  int v10; // edx
  __int64 *v11; // rbx
  int v12; // r9d
  unsigned int v13; // eax
  __int64 v14; // rdx
  char v15; // r14
  char v16; // r12
  __int64 v18[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v18[0] = 0LL;
  if ( a2 == 0x2000 )
  {
    v9 = (__int64 *)(a1 + 240);
    if ( *(_QWORD *)(a1 + 240) )
      goto LABEL_7;
    v10 = 0;
  }
  else
  {
    v9 = (__int64 *)(a1 + 248);
    if ( *(_QWORD *)(a1 + 248) )
      goto LABEL_7;
    v10 = 1;
  }
  CDropFeedbackItem::_RegisterAutoGutter(a1, v10, a3);
LABEL_7:
  Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v18, v9);
  v11 = (__int64 *)v18[0];
  if ( v18[0] )
  {
    v12 = 64;
    if ( a2 != 0x2000 )
      v12 = 128;
    v13 = *(_DWORD *)(a1 + 72);
    v14 = a2 & v13;
    v15 = (v12 & *(_DWORD *)(a1 + 160)) != 0;
    v16 = (v12 & v13) != 0;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v18[0] + 32LL))(v18[0], v14, a4, 0LL);
    if ( v15 != v16 )
      CDropFeedbackItem::_PaintAutoGutter(a1, v11, 0);
    if ( *(_BYTE *)(a1 + 157) )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0x80000) == 0 )
        v4 = a4;
      (*(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(*v11 + 24))(v11, a3, v4, 0LL);
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
}
