/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C00B53F8
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FillClipParams(
        struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct DISPLAY_SOURCE *a2,
        struct _DXGKARG_SETPOINTERPOSITION *a3,
        struct CURSOR_CLIP_PARAMS *a4)
{
  struct _DXGKARG_SETPOINTERSHAPE *v6; // r14
  int v7; // esi
  signed int v8; // edi
  int v9; // r13d
  int v10; // r12d
  UINT Width; // edx
  UINT Height; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  INT v15; // eax
  __int64 X; // rcx
  __int64 v17; // rax
  INT v18; // eax
  int v19; // eax
  INT Y; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // esi
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-20h]
  struct _DXGKARG_SETPOINTERPOSITION *v28; // [rsp+80h] [rbp+40h]

  v28 = a3;
  v6 = a1;
  if ( *((_BYTE *)a2 + 668) )
  {
    v8 = *((_DWORD *)a2 + 168);
    v10 = 0;
    v7 = *((_DWORD *)a2 + 169);
    v9 = 0;
    *(_QWORD *)&v27 = 0LL;
    HIDWORD(v27) = v7;
  }
  else
  {
    v27 = *(_OWORD *)((char *)a2 + 652);
    v7 = HIDWORD(v27);
    v8 = *(_QWORD *)((char *)a2 + 660);
    v9 = HIDWORD(*(_QWORD *)((char *)a2 + 652));
    v10 = v27;
  }
  if ( v8 - v10 < (signed int)a1->Width
    || (a1 = (struct _DXGKARG_SETPOINTERSHAPE *)DWORD1(v27), HIDWORD(v27) - DWORD1(v27) < (signed int)v6->Height) )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 206LL;
    WdLogEvent5_WdAssertion(v14);
    a3 = v28;
  }
  Width = v6->Width;
  *(_OWORD *)a4 = 0uLL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_DWORD *)a4 + 5) = 0;
  Height = v6->Height;
  *(_DWORD *)a4 = Width;
  *((_DWORD *)a4 + 1) = Height;
  if ( v10 && (v15 = a3->X, v15 < v10) )
  {
    *((_DWORD *)a4 + 5) = 4;
    *(_DWORD *)a4 = Width + v15 - v10;
  }
  else if ( *((_DWORD *)a2 + 253) != v8 )
  {
    X = (unsigned int)a3->X;
    if ( (int)(X + Width) > v8 )
    {
      if ( v8 - (int)X < 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(X);
        *(_QWORD *)(v17 + 24) = 226LL;
        WdLogEvent5_WdAssertion(v17);
        a3 = v28;
      }
      *(_DWORD *)a4 = v8 - a3->X;
      *((_DWORD *)a4 + 5) = 8;
    }
  }
  if ( v9 && (v18 = a3->Y, v18 < v9) )
  {
    v19 = v6->Height + v18 - v9;
    *((_DWORD *)a4 + 5) |= 1u;
    *((_DWORD *)a4 + 1) = v19;
  }
  else if ( v7 != *((_DWORD *)a2 + 254) )
  {
    Y = a3->Y;
    v21 = Y + v6->Height;
    if ( (int)v21 > v7 )
    {
      if ( v7 - Y < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v22 + 24) = 243LL;
        WdLogEvent5_WdAssertion(v22);
        a3 = v28;
      }
      v23 = v7 - a3->Y;
      *((_DWORD *)a4 + 5) |= 2u;
      *((_DWORD *)a4 + 1) = v23;
    }
  }
  v13 = *((unsigned int *)a4 + 5);
  if ( (_DWORD)v13 )
  {
    *((_DWORD *)a4 + 2) = v6->Pitch;
    if ( (v6->Flags.Value & 1) != 0 )
    {
      v24 = *(_BYTE *)a4;
      if ( (v13 & 4) != 0 )
      {
        LOBYTE(v13) = v6->Width & 7;
        *((_BYTE *)a4 + 17) = v13;
        *((_BYTE *)a4 + 16) = (v24 - v13) & 7;
      }
      else
      {
        *((_BYTE *)a4 + 16) = 0;
        *((_BYTE *)a4 + 17) = v24 & 7;
      }
      if ( *((_BYTE *)a4 + 16) >= 8u )
      {
        v25 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v25 + 24) = 272LL;
        WdLogEvent5_WdAssertion(v25);
      }
      if ( *((_BYTE *)a4 + 17) >= 8u )
      {
        v26 = WdLogNewEntry5_WdAssertion(v13);
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
