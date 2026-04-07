/*
 * XREFs of ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x1800766B8
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180076774 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180076774 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 */

__int64 __fastcall CLivePreview::_SetupOwneePreview(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v10; // rdx
  int v11; // eax
  int v13; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = 0LL;
  v6 = a4;
  if ( *(_DWORD *)(a2 + 576) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 552) + 8 * v5);
      if ( (*(_BYTE *)(v10 + 594) & 0x20) == 0 && ((*(_BYTE *)(v10 + 592) & 1) != 0 || *(_QWORD *)(v10 + 424)) )
      {
        LOBYTE(v13) = 1;
        LOBYTE(a4) = 1;
        v11 = CLivePreview::_SetupWindowPreview(a1, v10, a3, a4, v6, 0LL, v13);
        v4 = v11;
        if ( v11 < 0 )
          break;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(a2 + 576) )
        return v4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x16Au);
  }
  return v4;
}
