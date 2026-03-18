/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C009EEE0
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
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
  int v8; // edi
  int v9; // r13d
  int v10; // r12d
  __int64 Width; // rdx
  UINT Height; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  INT v15; // eax
  __int64 X; // rcx
  __int64 v17; // rax
  INT Y; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // esi
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  __int128 v26; // [rsp+20h] [rbp-20h]
  struct _DXGKARG_SETPOINTERPOSITION *v27; // [rsp+80h] [rbp+40h]

  v27 = a3;
  v6 = a1;
  if ( *((_BYTE *)a2 + 668) )
  {
    v8 = *((_DWORD *)a2 + 168);
    v10 = 0;
    v7 = *((_DWORD *)a2 + 169);
    v9 = 0;
    *(_QWORD *)&v26 = 0LL;
    HIDWORD(v26) = v7;
  }
  else
  {
    v26 = *(_OWORD *)((char *)a2 + 652);
    v7 = HIDWORD(v26);
    v8 = *(_QWORD *)((char *)a2 + 660);
    v9 = HIDWORD(*(_QWORD *)((char *)a2 + 652));
    v10 = v26;
  }
  if ( v8 - v10 < (signed int)a1->Width
    || (a1 = (struct _DXGKARG_SETPOINTERSHAPE *)DWORD1(v26), HIDWORD(v26) - DWORD1(v26) < (signed int)v6->Height) )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 206LL;
    WdLogEvent5_WdAssertion(v14);
    a3 = v27;
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
  else if ( *((_DWORD *)a2 + 243) != v8 )
  {
    X = (unsigned int)a3->X;
    if ( (int)X + (int)Width > v8 )
    {
      if ( v8 - (int)X < 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(X, Width, a3, a4);
        *(_QWORD *)(v17 + 24) = 226LL;
        WdLogEvent5_WdAssertion(v17);
        a3 = v27;
      }
      *(_DWORD *)a4 = v8 - a3->X;
      *((_DWORD *)a4 + 5) = 8;
    }
  }
  if ( v9 && (Y = a3->Y, Y < v9) )
  {
    v19 = v6->Height + Y - v9;
    *((_DWORD *)a4 + 5) |= 1u;
    *((_DWORD *)a4 + 1) = v19;
  }
  else if ( v7 != *((_DWORD *)a2 + 244) )
  {
    Width = (unsigned int)a3->Y;
    v20 = (unsigned int)(Width + v6->Height);
    if ( (int)v20 > v7 )
    {
      if ( v7 - (int)Width < 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20, Width, a3, a4);
        *(_QWORD *)(v21 + 24) = 243LL;
        WdLogEvent5_WdAssertion(v21);
        a3 = v27;
      }
      v22 = v7 - a3->Y;
      *((_DWORD *)a4 + 5) |= 2u;
      *((_DWORD *)a4 + 1) = v22;
    }
  }
  v13 = *((unsigned int *)a4 + 5);
  if ( (_DWORD)v13 )
  {
    *((_DWORD *)a4 + 2) = v6->Pitch;
    if ( (v6->Flags.Value & 1) != 0 )
    {
      v23 = *(_BYTE *)a4;
      if ( (v13 & 4) != 0 )
      {
        LOBYTE(v13) = v6->Width & 7;
        *((_BYTE *)a4 + 17) = v13;
        *((_BYTE *)a4 + 16) = (v23 - v13) & 7;
      }
      else
      {
        *((_BYTE *)a4 + 16) = 0;
        *((_BYTE *)a4 + 17) = v23 & 7;
      }
      if ( *((_BYTE *)a4 + 16) >= 8u )
      {
        v24 = WdLogNewEntry5_WdAssertion(v13, Width, a3, a4);
        *(_QWORD *)(v24 + 24) = 272LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( *((_BYTE *)a4 + 17) >= 8u )
      {
        v25 = WdLogNewEntry5_WdAssertion(v13, Width, a3, a4);
        *(_QWORD *)(v25 + 24) = 273LL;
        WdLogEvent5_WdAssertion(v25);
      }
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 0;
    }
  }
}
