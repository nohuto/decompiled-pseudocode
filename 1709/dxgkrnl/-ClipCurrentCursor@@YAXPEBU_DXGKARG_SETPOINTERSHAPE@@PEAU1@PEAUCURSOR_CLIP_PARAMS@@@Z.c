/*
 * XREFs of ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01B313C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct CURSOR_CLIP_PARAMS *a3)
{
  struct _DXGKARG_SETPOINTERSHAPE *v5; // r14
  UINT v6; // esi
  UINT YHot; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  int v12; // ebp
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE *v16; // r8
  _BYTE *v17; // r9
  _BYTE *v18; // rcx
  char v19; // r12
  char v20; // r15
  size_t v21; // r14
  void *v22; // rcx
  const void *v23; // rax
  bool v24; // zf
  UINT v25; // esi
  __int64 v26; // rax
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE *v30; // rdi
  _BYTE *v31; // rsi
  unsigned int v32; // ecx
  __int64 v33; // r13
  char v34; // r8
  char v35; // r15
  __int64 v36; // r12
  size_t v37; // r14
  void *v38; // rbx
  const void *v39; // rbp
  int v40; // eax
  __int64 v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rax
  _BYTE *v45; // rdi
  _BYTE *v46; // rsi
  unsigned int v47; // ecx
  char v48; // r8
  char v49; // r15
  __int64 v50; // r12
  __int64 v51; // r13
  size_t v52; // r14
  void *v53; // rbx
  const void *v54; // rbp
  _BYTE *v55; // [rsp+20h] [rbp-68h]
  _BYTE *v56; // [rsp+28h] [rbp-60h]
  __int64 v57; // [rsp+30h] [rbp-58h]
  __int64 v58; // [rsp+38h] [rbp-50h]
  _BYTE *v59; // [rsp+90h] [rbp+8h]
  char v60; // [rsp+90h] [rbp+8h]
  char v61; // [rsp+90h] [rbp+8h]
  char v63; // [rsp+98h] [rbp+10h]
  char v64; // [rsp+98h] [rbp+10h]
  _BYTE *v65; // [rsp+A0h] [rbp+18h]

  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  v5 = a2;
  v6 = 0;
  a2->Height = a1->Height;
  a2->Pitch = a1->Pitch;
  a2->XHot = a1->XHot;
  YHot = a1->YHot;
  v8 = *((unsigned int *)a3 + 5);
  a2->YHot = YHot;
  if ( (v8 & 1) != 0 )
    v6 = a1->Pitch * (a1->Height - *((_DWORD *)a3 + 1));
  if ( (v8 & 4) != 0 )
  {
    v8 = a1->Width - *(_DWORD *)a3;
    if ( (a1->Flags.Value & 1) != 0 )
    {
      v8 = (unsigned int)v8 >> 3;
      v6 += v8;
    }
    else
    {
      v6 += 4 * v8;
    }
  }
  if ( (a1->Flags.Value & 1) != 0 )
  {
    memset((void *)a2->pPixels, 255, a2->Height * a2->Pitch);
    if ( *((_DWORD *)a3 + 3) )
    {
      v10 = *((unsigned __int8 *)a3 + 17);
      if ( ((*(_BYTE *)a3 - *((_BYTE *)a3 + 16) - (_BYTE)v10) & 7) != 0 )
      {
        v11 = WdLogNewEntry5_WdAssertion(*(_DWORD *)a3 - (unsigned int)*((unsigned __int8 *)a3 + 16) - v10);
        *(_QWORD *)(v11 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v11);
      }
      v12 = *(_DWORD *)a3;
      v13 = (*(_DWORD *)a3 - *((unsigned __int8 *)a3 + 16) - (unsigned int)*((unsigned __int8 *)a3 + 17)) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v14 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v14 + 24) = 131LL;
        WdLogEvent5_WdAssertion(v14);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v15 + 24) = 132LL;
        WdLogEvent5_WdAssertion(v15);
      }
      v12 = *(_DWORD *)a3;
      v13 = 4 * *(_DWORD *)a3;
    }
    v16 = (char *)v5->pPixels + v6;
    v17 = (char *)a1->pPixels + v6;
    v18 = (_BYTE *)*((unsigned int *)a3 + 1);
    v55 = v16;
    v56 = v17;
    if ( (_DWORD)v18 )
    {
      v19 = *((_BYTE *)a3 + 17);
      v20 = *((_BYTE *)a3 + 16);
      v58 = *((unsigned int *)a3 + 2);
      v21 = v13;
      v57 = *((unsigned int *)a3 + 1);
      do
      {
        v22 = v16;
        v23 = v17;
        v59 = v16;
        v65 = v17;
        if ( v20 )
        {
          v23 = v17 + 1;
          *v16 = ((1 << v20) - 1) & *v17 | *v16 & ~((1 << v20) - 1);
          v22 = v16 + 1;
          v59 = v16 + 1;
          v65 = v17 + 1;
        }
        memmove(v22, v23, v21);
        if ( v19 )
        {
          v18 = v65;
          LOBYTE(v18) = ((1 << (8 - v19)) - 1) & v59[v21] | ~((1 << (8 - v19)) - 1) & v65[v21];
          v59[v21] = (_BYTE)v18;
        }
        v16 = &v55[v58];
        v17 = &v56[v58];
        v24 = v57-- == 1;
        v55 += v58;
        v56 += v58;
      }
      while ( !v24 );
      v5 = a2;
    }
    v25 = a1->Height * a1->Pitch + v6;
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( (((_BYTE)v12 - *((_BYTE *)a3 + 16) - *((_BYTE *)a3 + 17)) & 7) != 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v26 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = (*(_DWORD *)a3 - *((unsigned __int8 *)a3 + 16) - (unsigned int)*((unsigned __int8 *)a3 + 17)) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v28 + 24) = 131LL;
        WdLogEvent5_WdAssertion(v28);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v18);
        *(_QWORD *)(v29 + 24) = 132LL;
        WdLogEvent5_WdAssertion(v29);
      }
      v27 = 4 * *(_DWORD *)a3;
    }
    v30 = (char *)a1->pPixels + v25;
    v31 = (char *)v5->pPixels + v25;
    v32 = *((_DWORD *)a3 + 1);
    if ( v32 )
    {
      v33 = v32;
      v34 = *((_BYTE *)a3 + 16);
      v35 = 8 - *((_BYTE *)a3 + 17);
      v36 = *((unsigned int *)a3 + 2);
      v60 = v34;
      v63 = *((_BYTE *)a3 + 17);
      v37 = v27;
      do
      {
        v38 = v31;
        v39 = v30;
        if ( v34 )
        {
          v38 = v31 + 1;
          v39 = v30 + 1;
          *v31 = ((1 << v34) - 1) & *v30 | *v31 & ~((1 << v34) - 1);
        }
        memmove(v38, v39, v37);
        if ( v63 )
          *((_BYTE *)v38 + v37) = *((_BYTE *)v38 + v37) & ((1 << v35) - 1) | ~((1 << v35) - 1) & *((_BYTE *)v39 + v37);
        v34 = v60;
        v31 += v36;
        v30 += v36;
        --v33;
      }
      while ( v33 );
    }
  }
  else
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      v40 = *((unsigned __int8 *)a3 + 17);
      if ( ((*(_BYTE *)a3 - *((_BYTE *)a3 + 16) - (_BYTE)v40) & 7) != 0 )
      {
        v41 = WdLogNewEntry5_WdAssertion(*(_DWORD *)a3 - (unsigned int)*((unsigned __int8 *)a3 + 16) - v40);
        *(_QWORD *)(v41 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v41);
      }
      v42 = (*(_DWORD *)a3 - *((unsigned __int8 *)a3 + 16) - (unsigned int)*((unsigned __int8 *)a3 + 17)) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v43 + 24) = 131LL;
        WdLogEvent5_WdAssertion(v43);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v44 + 24) = 132LL;
        WdLogEvent5_WdAssertion(v44);
      }
      v42 = 4 * *(_DWORD *)a3;
    }
    v45 = (char *)a1->pPixels + v6;
    v46 = (char *)v5->pPixels + v6;
    v47 = *((_DWORD *)a3 + 1);
    if ( v47 )
    {
      v48 = *((_BYTE *)a3 + 16);
      v49 = 8 - *((_BYTE *)a3 + 17);
      v50 = *((unsigned int *)a3 + 2);
      v51 = v47;
      v61 = v48;
      v64 = *((_BYTE *)a3 + 17);
      v52 = v42;
      do
      {
        v53 = v46;
        v54 = v45;
        if ( v48 )
        {
          v53 = v46 + 1;
          v54 = v45 + 1;
          *v46 = ((1 << v48) - 1) & *v45 | *v46 & ~((1 << v48) - 1);
        }
        memmove(v53, v54, v52);
        if ( v64 )
          *((_BYTE *)v53 + v52) = ((1 << v49) - 1) & *((_BYTE *)v53 + v52) | ~((1 << v49) - 1) & *((_BYTE *)v54 + v52);
        v48 = v61;
        v46 += v50;
        v45 += v50;
        --v51;
      }
      while ( v51 );
    }
  }
}
