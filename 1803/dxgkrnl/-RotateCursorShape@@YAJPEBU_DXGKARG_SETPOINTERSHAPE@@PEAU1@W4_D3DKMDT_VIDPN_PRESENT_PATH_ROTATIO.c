/*
 * XREFs of ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C01AF53C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x1C01AF794 (-RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z.c)
 */

__int64 __fastcall RotateCursorShape(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct _DXGK_DRIVERCAPS *a4)
{
  __int64 v4; // rsi
  UINT YHot; // eax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  UINT Width; // r8d
  UINT Pitch; // edx
  UINT Value; // r9d
  UINT Height; // ecx
  int v17; // r9d
  char *pPixels; // r11
  UINT v19; // eax
  UINT v20; // ecx
  UINT v21; // edx
  UINT v22; // eax
  UINT v23; // ecx
  UINT v24; // [rsp+20h] [rbp-50h] BYREF
  UINT v25; // [rsp+24h] [rbp-4Ch]
  UINT v26; // [rsp+28h] [rbp-48h]
  UINT v27; // [rsp+2Ch] [rbp-44h]
  UINT v28; // [rsp+30h] [rbp-40h]
  UINT v29; // [rsp+34h] [rbp-3Ch]
  char *v30; // [rsp+38h] [rbp-38h]
  int v31; // [rsp+40h] [rbp-30h]
  int v32; // [rsp+44h] [rbp-2Ch]
  _DWORD v33[2]; // [rsp+48h] [rbp-28h] BYREF
  UINT v34; // [rsp+50h] [rbp-20h]
  UINT v35; // [rsp+54h] [rbp-1Ch]
  UINT v36; // [rsp+58h] [rbp-18h]
  UINT v37; // [rsp+5Ch] [rbp-14h]
  char *v38; // [rsp+60h] [rbp-10h]
  int v39; // [rsp+68h] [rbp-8h]
  int v40; // [rsp+6Ch] [rbp-4h]

  v4 = a3;
  if ( a3 == D3DKMDT_VPPR_IDENTITY )
  {
    a2->Flags.Value = a1->Flags.Value;
    a2->Width = a1->Width;
    a2->Height = a1->Height;
    a2->Pitch = a1->Pitch;
    memmove((void *)a2->pPixels, a1->pPixels, a1->Height * a1->Pitch * ((a1->Flags.Value & 1) + 1));
LABEL_3:
    a2->XHot = a1->XHot;
    YHot = a1->YHot;
LABEL_4:
    a2->YHot = YHot;
    return 0LL;
  }
  v10 = 2LL;
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    a2->Flags.Value = a1->Flags.Value;
    a2->Width = a1->Width;
    a2->Height = a1->Height;
    a2->Pitch = a1->Pitch;
    memmove((void *)a2->pPixels, a1->pPixels, a1->Height * a1->Pitch * ((a1->Flags.Value & 1) + 1));
    a2->XHot = a1->XHot;
    a2->YHot = a1->YHot;
    goto LABEL_8;
  }
  Width = a1->Width;
  Pitch = a1->Pitch;
  Value = a1->Flags.Value;
  Height = a1->Height;
  v17 = Value & 1;
  pPixels = (char *)a2->pPixels;
  v38 = (char *)a1->pPixels;
  v40 = v17;
  v32 = v17;
  v35 = Height;
  v34 = Height;
  v26 = Height;
  v33[1] = Width;
  v33[0] = Width;
  v24 = Width;
  v37 = Pitch;
  v36 = Pitch;
  v28 = Pitch;
  v30 = pPixels;
  v31 = v4;
  v39 = 1;
  if ( (((_DWORD)v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    v19 = Width;
    v25 = Width;
  }
  else
  {
    v25 = Height;
    v19 = Height;
    if ( v17 )
      Pitch = (Height + 7) >> 3;
    else
      Pitch = 4 * Height;
    Height = Width;
  }
  v29 = Pitch;
  v27 = Height;
  if ( v19 <= a4->MaxPointerWidth && Height <= a4->MaxPointerHeight )
  {
    if ( v17 )
    {
      memset(pPixels, 255, Height * Pitch);
      do
      {
        RotateCursorShapeWorker((struct CURSOR_INFO *)&v24, (const struct CURSOR_INFO *)v33);
        v20 = v29;
        v21 = v27;
        v30 += v27 * v29;
        v38 += v34 * v36;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      RotateCursorShapeWorker((struct CURSOR_INFO *)&v24, (const struct CURSOR_INFO *)v33);
      v20 = v29;
      v21 = v27;
    }
    v22 = v25;
    a2->Pitch = v20;
    a2->Height = v21;
    a2->Width = v22;
    a2->Flags.Value = a1->Flags.Value;
    if ( (_DWORD)v4 == 1 )
      goto LABEL_3;
    if ( (_DWORD)v4 == 2 )
    {
      a2->XHot = a1->YHot;
      v23 = a1->Width - a1->XHot;
    }
    else
    {
      v11 = (unsigned int)(v4 - 3);
      if ( (_DWORD)v4 != 3 )
      {
        if ( (_DWORD)v4 == 4 )
        {
          a2->XHot = a1->Height - a1->YHot;
          YHot = a1->XHot;
          goto LABEL_4;
        }
LABEL_8:
        v12 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v12 + 24) = v4;
        WdLogEvent5_WdAssertion(v12);
        return 0LL;
      }
      a2->XHot = a1->Width - a1->XHot;
      v23 = a1->Height - a1->YHot;
    }
    a2->YHot = v23;
    return 0LL;
  }
  return 3221225659LL;
}
