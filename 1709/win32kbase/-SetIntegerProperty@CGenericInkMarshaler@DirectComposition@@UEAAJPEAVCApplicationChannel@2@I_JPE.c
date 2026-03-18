/*
 * XREFs of ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01419B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C0141824 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C01418CC (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetIntegerProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  bool *v5; // r11
  __int64 v6; // r10
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  unsigned int SegmentCount; // eax
  __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rax

  v5 = a5;
  LODWORD(v6) = 0;
  *a5 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( (unsigned __int64)(a4 - 1) <= 0xFF )
    {
      v15 = *((_QWORD *)this + 15);
      if ( !v15 )
      {
        *((_QWORD *)this + 15) = a4;
        goto LABEL_18;
      }
      if ( a4 == v15 )
        return (unsigned int)v6;
    }
    goto LABEL_20;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(this);
    if ( *(_QWORD *)(v13 + 120) != v6 && v14 <= SegmentCount )
    {
      *(_DWORD *)(v13 + 16) &= ~0x40u;
      *(_DWORD *)(v13 + 128) = SegmentCount - v14;
      goto LABEL_18;
    }
    goto LABEL_20;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      *((_DWORD *)this + 38) = a4;
      goto LABEL_10;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      *((_DWORD *)this + 39) = a4;
      goto LABEL_10;
    }
    if ( v11 == 1 )
    {
      *((_DWORD *)this + 40) = a4;
LABEL_10:
      *((_DWORD *)this + 4) &= ~0x80u;
LABEL_18:
      *v5 = 1;
      return (unsigned int)v6;
    }
LABEL_20:
    LODWORD(v6) = -1073741811;
    return (unsigned int)v6;
  }
  LODWORD(v6) = DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(this, (unsigned int)a4, a5);
  return (unsigned int)v6;
}
