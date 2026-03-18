/*
 * XREFs of ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C01AEE2C
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct CURSOR_CLIP_PARAMS *a3)
{
  struct _DXGKARG_SETPOINTERSHAPE *v3; // r15
  UINT Height; // r8d
  UINT v7; // esi
  UINT Pitch; // edx
  UINT YHot; // eax
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rcx
  int v13; // edi
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int8 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE *v21; // r8
  _BYTE *v22; // r9
  _BYTE *v23; // rcx
  char v24; // r12
  char v25; // r13
  size_t v26; // rbp
  void *v27; // rcx
  const void *v28; // rax
  bool v29; // zf
  UINT v30; // esi
  __int64 v31; // rcx
  unsigned __int8 v32; // dl
  __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE *v37; // r14
  _BYTE *v38; // rsi
  unsigned int v39; // ecx
  __int64 v40; // r13
  char v41; // dl
  char v42; // bp
  __int64 v43; // r12
  size_t v44; // r15
  void *v45; // rbx
  const void *v46; // rdi
  int v47; // edx
  __int64 v48; // rcx
  unsigned __int8 v49; // r8
  __int64 v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  _BYTE *v54; // rdi
  _BYTE *v55; // rsi
  unsigned int v56; // ecx
  char v57; // r8
  char v58; // bp
  __int64 v59; // r12
  __int64 v60; // r13
  size_t v61; // r15
  void *v62; // rbx
  const void *v63; // r14
  _BYTE *v64; // [rsp+20h] [rbp-68h]
  __int64 v65; // [rsp+28h] [rbp-60h]
  __int64 v66; // [rsp+30h] [rbp-58h]
  _BYTE *v67; // [rsp+90h] [rbp+8h]
  char v68; // [rsp+90h] [rbp+8h]
  char v69; // [rsp+90h] [rbp+8h]
  char v71; // [rsp+98h] [rbp+10h]
  char v72; // [rsp+98h] [rbp+10h]
  _BYTE *v73; // [rsp+A0h] [rbp+18h]
  _BYTE *v74; // [rsp+A8h] [rbp+20h]

  v3 = a2;
  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  Height = a1->Height;
  v7 = 0;
  a2->Height = Height;
  Pitch = a1->Pitch;
  v3->Pitch = Pitch;
  v3->XHot = a1->XHot;
  YHot = a1->YHot;
  v10 = *((unsigned int *)a3 + 5);
  v3->YHot = YHot;
  if ( (v10 & 1) != 0 )
    v7 = a1->Pitch * (a1->Height - *((_DWORD *)a3 + 1));
  if ( (v10 & 4) != 0 )
  {
    v10 = a1->Width - *(_DWORD *)a3;
    if ( (a1->Flags.Value & 1) != 0 )
    {
      v10 = (unsigned int)v10 >> 3;
      v7 += v10;
    }
    else
    {
      v7 += 4 * v10;
    }
  }
  v11 = *((_DWORD *)a3 + 3);
  if ( (a1->Flags.Value & 1) != 0 )
  {
    memset((void *)v3->pPixels, 255, Pitch * Height);
    if ( v11 )
    {
      v13 = *(_DWORD *)a3;
      v14 = *(_DWORD *)a3;
      v15 = *((unsigned __int8 *)a3 + 16);
      v16 = *((_BYTE *)a3 + 17);
      if ( ((*(_BYTE *)a3 - (_BYTE)v15 - v16) & 7) != 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v17 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v17);
        v13 = *(_DWORD *)a3;
        v14 = *(_DWORD *)a3;
        v16 = *((_BYTE *)a3 + 17);
        LOBYTE(v15) = *((_BYTE *)a3 + 16);
      }
      v18 = (v14 - (unsigned __int8)v15 - (unsigned int)v16) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v19 + 24) = 131LL;
        WdLogEvent5_WdAssertion(v19);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v20 + 24) = 132LL;
        WdLogEvent5_WdAssertion(v20);
      }
      v13 = *(_DWORD *)a3;
      v18 = 4 * *(_DWORD *)a3;
    }
    v21 = (char *)v3->pPixels + v7;
    v22 = (char *)a1->pPixels + v7;
    v23 = (_BYTE *)*((unsigned int *)a3 + 1);
    v74 = v21;
    v64 = v22;
    if ( (_DWORD)v23 )
    {
      v24 = *((_BYTE *)a3 + 16);
      v25 = *((_BYTE *)a3 + 17);
      v66 = *((unsigned int *)a3 + 2);
      v26 = v18;
      v65 = *((unsigned int *)a3 + 1);
      do
      {
        v27 = v21;
        v28 = v22;
        v67 = v21;
        v73 = v22;
        if ( v24 )
        {
          v28 = v22 + 1;
          *v21 = ((1 << v24) - 1) & *v22 | *v21 & ~((1 << v24) - 1);
          v27 = v21 + 1;
          v67 = v21 + 1;
          v73 = v22 + 1;
        }
        memmove(v27, v28, v26);
        if ( v25 )
        {
          v23 = v73;
          LOBYTE(v23) = ((1 << (8 - v25)) - 1) & v67[v26] | ~((1 << (8 - v25)) - 1) & v73[v26];
          v67[v26] = (_BYTE)v23;
        }
        v21 = &v74[v66];
        v22 = &v64[v66];
        v29 = v65-- == 1;
        v74 += v66;
        v64 += v66;
      }
      while ( !v29 );
      v3 = a2;
    }
    v30 = a1->Height * a1->Pitch + v7;
    if ( *((_DWORD *)a3 + 3) )
    {
      v31 = *((unsigned __int8 *)a3 + 16);
      v32 = *((_BYTE *)a3 + 17);
      if ( (((_BYTE)v13 - (_BYTE)v31 - v32) & 7) != 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31);
        *(_QWORD *)(v33 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v33);
        v32 = *((_BYTE *)a3 + 17);
        LOBYTE(v31) = *((_BYTE *)a3 + 16);
        v13 = *(_DWORD *)a3;
      }
      v34 = (v13 - (unsigned __int8)v31 - (unsigned int)v32) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v35 + 24) = 131LL;
        WdLogEvent5_WdAssertion(v35);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v36 + 24) = 132LL;
        WdLogEvent5_WdAssertion(v36);
      }
      v34 = 4 * *(_DWORD *)a3;
    }
    v37 = (char *)a1->pPixels + v30;
    v38 = (char *)v3->pPixels + v30;
    v39 = *((_DWORD *)a3 + 1);
    if ( v39 )
    {
      v40 = v39;
      v41 = *((_BYTE *)a3 + 16);
      v42 = 8 - *((_BYTE *)a3 + 17);
      v43 = *((unsigned int *)a3 + 2);
      v68 = v41;
      v71 = *((_BYTE *)a3 + 17);
      v44 = v34;
      do
      {
        v45 = v38;
        v46 = v37;
        if ( v41 )
        {
          v45 = v38 + 1;
          v46 = v37 + 1;
          *v38 = ((1 << v41) - 1) & *v37 | *v38 & ~((1 << v41) - 1);
        }
        memmove(v45, v46, v44);
        if ( v71 )
          *((_BYTE *)v45 + v44) = *((_BYTE *)v45 + v44) & ((1 << v42) - 1) | ~((1 << v42) - 1) & *((_BYTE *)v46 + v44);
        v41 = v68;
        v38 += v43;
        v37 += v43;
        --v40;
      }
      while ( v40 );
    }
  }
  else
  {
    if ( v11 )
    {
      v47 = *(_DWORD *)a3;
      v48 = *((unsigned __int8 *)a3 + 16);
      v49 = *((_BYTE *)a3 + 17);
      if ( ((*(_BYTE *)a3 - (_BYTE)v48 - v49) & 7) != 0 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v48);
        *(_QWORD *)(v50 + 24) = 126LL;
        WdLogEvent5_WdAssertion(v50);
        v49 = *((_BYTE *)a3 + 17);
        v47 = *(_DWORD *)a3;
        LOBYTE(v48) = *((_BYTE *)a3 + 16);
      }
      v51 = (v47 - (unsigned __int8)v48 - (unsigned int)v49) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v52 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v52 + 24) = 131LL;
        WdLogEvent5_WdAssertion(v52);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v53 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v53 + 24) = 132LL;
        WdLogEvent5_WdAssertion(v53);
      }
      v51 = 4 * *(_DWORD *)a3;
    }
    v54 = (char *)v3->pPixels + v7;
    v55 = (char *)a1->pPixels + v7;
    v56 = *((_DWORD *)a3 + 1);
    if ( v56 )
    {
      v57 = *((_BYTE *)a3 + 16);
      v58 = 8 - *((_BYTE *)a3 + 17);
      v59 = *((unsigned int *)a3 + 2);
      v60 = v56;
      v69 = v57;
      v72 = *((_BYTE *)a3 + 17);
      v61 = v51;
      do
      {
        v62 = v54;
        v63 = v55;
        if ( v57 )
        {
          v62 = v54 + 1;
          v63 = v55 + 1;
          *v54 = ((1 << v57) - 1) & *v55 | *v54 & ~((1 << v57) - 1);
        }
        memmove(v62, v63, v61);
        if ( v72 )
          *((_BYTE *)v62 + v61) = ((1 << v58) - 1) & *((_BYTE *)v62 + v61) | ~((1 << v58) - 1) & *((_BYTE *)v63 + v61);
        v57 = v69;
        v54 += v59;
        v55 += v59;
        --v60;
      }
      while ( v60 );
    }
  }
}
