/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C00AD1BC
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     <none>
 */

void __fastcall FillClipParams(
        struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct DISPLAY_SOURCE *a2,
        struct _DXGKARG_SETPOINTERPOSITION *a3,
        struct CURSOR_CLIP_PARAMS *a4)
{
  char v4; // di
  struct _DXGKARG_SETPOINTERPOSITION *v6; // r9
  struct _DXGKARG_SETPOINTERSHAPE *v8; // r14
  int v9; // r12d
  int v10; // esi
  int v11; // r15d
  signed int Width; // edx
  UINT Height; // eax
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  INT v18; // eax
  __int64 X; // rcx
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  INT Y; // r9d
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-30h]

  v4 = 0;
  v6 = a3;
  v8 = a1;
  if ( *((_BYTE *)a2 + 668) )
  {
    v10 = *((_DWORD *)a2 + 168);
    v11 = 0;
    v9 = *((_DWORD *)a2 + 169);
    HIDWORD(v27) = v9;
    *(_QWORD *)&v27 = 0LL;
  }
  else
  {
    v27 = *(_OWORD *)((char *)a2 + 652);
    v9 = HIDWORD(v27);
    v10 = *(_QWORD *)((char *)a2 + 660);
    v11 = v27;
  }
  Width = a1->Width;
  if ( v10 - v11 < Width
    || (a1 = (struct _DXGKARG_SETPOINTERSHAPE *)DWORD1(v27), HIDWORD(v27) - DWORD1(v27) < (signed int)v8->Height) )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 206LL;
    WdLogEvent5_WdAssertion(v17);
    Width = v8->Width;
    v6 = a3;
  }
  Height = v8->Height;
  *(_OWORD *)a4 = 0uLL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 5) = 0;
  *(_DWORD *)a4 = Width;
  *((_DWORD *)a4 + 1) = Height;
  if ( v11 && (v18 = v6->X, v18 < v11) )
  {
    *((_DWORD *)a4 + 5) = 4;
    v14 = 4;
    *(_DWORD *)a4 = Width + v18 - v11;
  }
  else
  {
    v14 = 0;
    if ( *((_DWORD *)a2 + 253) != v10 )
    {
      X = (unsigned int)v6->X;
      if ( (int)X + Width > v10 )
      {
        if ( v10 - (int)X < 0 )
        {
          v20 = WdLogNewEntry5_WdAssertion(X);
          *(_QWORD *)(v20 + 24) = 226LL;
          WdLogEvent5_WdAssertion(v20);
          v6 = a3;
          LODWORD(X) = a3->X;
        }
        *((_DWORD *)a4 + 5) = 8;
        *(_DWORD *)a4 = v10 - X;
        v14 = 8;
      }
    }
  }
  v15 = DWORD1(v27);
  if ( DWORD1(v27) && (v21 = v6->Y, v21 < SDWORD1(v27)) )
  {
    v22 = v14 | 1;
    *((_DWORD *)a4 + 1) = v8->Height + v21 - DWORD1(v27);
    *((_DWORD *)a4 + 5) = v22;
    v16 = v22;
  }
  else
  {
    v16 = v14;
    if ( v9 != *((_DWORD *)a2 + 254) )
    {
      Y = v6->Y;
      v15 = Y + v8->Height;
      if ( (int)v15 > v9 )
      {
        if ( v9 - Y < 0 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v15);
          *(_QWORD *)(v24 + 24) = 243LL;
          WdLogEvent5_WdAssertion(v24);
          v16 = *((_DWORD *)a4 + 5);
          Y = a3->Y;
        }
        v16 |= 2u;
        *((_DWORD *)a4 + 1) = v9 - Y;
        *((_DWORD *)a4 + 5) = v16;
      }
    }
  }
  if ( v16 )
  {
    *((_DWORD *)a4 + 2) = v8->Pitch;
    if ( (v8->Flags.Value & 1) != 0 )
    {
      LOBYTE(v15) = *(_BYTE *)a4;
      if ( (v16 & 4) != 0 )
      {
        v25 = v8->Width & 7;
        LOBYTE(v15) = (v15 - v25) & 7;
        v4 = v15;
      }
      else
      {
        v25 = v15 & 7;
      }
      *((_BYTE *)a4 + 17) = v25;
      *((_BYTE *)a4 + 16) = v4;
      if ( *((_BYTE *)a4 + 17) >= 8u )
      {
        v26 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v26 + 24) = 273LL;
        WdLogEvent5_WdAssertion(v26);
      }
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 0;
    }
  }
}
