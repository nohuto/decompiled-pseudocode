/*
 * XREFs of ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0148AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C0148958 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C01489FC (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
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
  int v12; // r8d
  unsigned int SegmentCount; // eax
  __int64 v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // rax

  v5 = a5;
  LODWORD(v6) = 0;
  *a5 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( (unsigned __int64)(a4 - 1) <= 0xFF )
    {
      v16 = *((_QWORD *)this + 15);
      if ( !v16 )
      {
        *((_QWORD *)this + 15) = a4;
        goto LABEL_20;
      }
      if ( a4 == v16 )
        return (unsigned int)v6;
    }
    goto LABEL_22;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(this);
    if ( *(_QWORD *)(v14 + 120) != v6 && v15 <= SegmentCount )
    {
      *(_DWORD *)(v14 + 16) &= ~0x40u;
      *(_DWORD *)(v14 + 128) = SegmentCount - v15;
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( !v11 )
      {
        *((_DWORD *)this + 38) = a4;
        goto LABEL_11;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        *((_DWORD *)this + 39) = a4;
        goto LABEL_11;
      }
      if ( v12 == 1 )
      {
        *((_DWORD *)this + 40) = a4;
LABEL_11:
        *((_DWORD *)this + 4) &= ~0x80u;
LABEL_20:
        *v5 = 1;
        return (unsigned int)v6;
      }
LABEL_22:
      LODWORD(v6) = -1073741811;
      return (unsigned int)v6;
    }
    *((_DWORD *)this + 35) = a4;
  }
  else
  {
    LODWORD(v6) = DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(this, (unsigned int)a4, a5);
  }
  return (unsigned int)v6;
}
