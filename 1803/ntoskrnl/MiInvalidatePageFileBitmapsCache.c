/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x14009D014
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400DA49C (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

char __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, unsigned __int64 a4)
{
  BOOLEAN v5; // bl
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  int v11; // r8d
  unsigned int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  _QWORD *v19; // r9
  __int64 *v20; // r14
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  BOOLEAN v24; // r8
  int v25; // ecx
  unsigned __int64 v26; // rax
  _RTL_RB_TREE *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // r8d
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // rsi

  v5 = 0;
  if ( a4 )
  {
LABEL_18:
    v13 = *(_DWORD *)(a4 + 48);
    if ( v13 == a2 || (v14 = a2 + a3, v15 = v13 + *(_DWORD *)(a4 + 52), a2 + a3 == v15) )
    {
      v34 = *(_DWORD *)(a4 + 52) - a3;
      *(_DWORD *)(a4 + 52) = v34;
      if ( v13 == a2 )
        *(_DWORD *)(a4 + 48) = v13 + a3;
      v33 = a4;
      if ( !v34 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)a4);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)(a4 + 24));
        v35 = a1 + 176;
        v9 = *(_QWORD *)(v35 + 8);
        if ( *(_QWORD *)v9 != v35 )
          __fastfail(3u);
        *(_QWORD *)a4 = v35;
        *(_QWORD *)(a4 + 8) = v9;
        *(_QWORD *)v9 = a4;
        *(_QWORD *)(v35 + 8) = a4;
        return v9;
      }
    }
    else
    {
      v16 = v15 - a2;
      v17 = a2 - v13;
      v18 = v16 - a3;
      v19 = (_QWORD *)(a1 + 176);
      v20 = *(__int64 **)(a1 + 176);
      if ( v20 != (__int64 *)(a1 + 176) )
      {
        if ( (_QWORD *)v20[1] != v19 || (v21 = *v20, *(__int64 **)(*v20 + 8) != v20) )
          __fastfail(3u);
        *v19 = v21;
        *(_QWORD *)(v21 + 8) = v19;
        *((_DWORD *)v20 + 13) = v18;
        *((_DWORD *)v20 + 12) = v14;
        *(_DWORD *)(a4 + 52) = v17;
        MiBitmapsCachedEntryLengthChanged(a1, a4, 0LL);
        v22 = *(_QWORD *)(a1 + 152);
        v23 = *(_QWORD *)(a1 + 144);
        if ( (v22 & 1) != 0 )
        {
          if ( v23 )
            v23 ^= a1 + 144;
          else
            v23 = 0LL;
        }
        v24 = 0;
        v25 = v22 & 1;
        if ( v23 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)v20[6] < *(_QWORD *)(v23 + 48) )
            {
              v26 = *(_QWORD *)v23;
              if ( v25 )
              {
                if ( !v26 )
                  goto LABEL_39;
                v26 ^= v23;
              }
              if ( !v26 )
              {
LABEL_39:
                v24 = 0;
                break;
              }
            }
            else
            {
              v26 = *(_QWORD *)(v23 + 8);
              if ( v25 )
              {
                if ( !v26 )
                  goto LABEL_33;
                v26 ^= v23;
              }
              if ( !v26 )
              {
LABEL_33:
                v24 = 1;
                break;
              }
            }
            v23 = v26;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v23, v24, (PRTL_BALANCED_NODE)v20);
        v27 = (_RTL_RB_TREE *)(a1 + 160);
        v28 = *(_QWORD *)(a1 + 168);
        v29 = *(_QWORD *)(a1 + 160);
        if ( (v28 & 1) != 0 )
        {
          if ( v29 )
            v29 ^= (unsigned __int64)v27;
          else
            v29 = 0LL;
        }
        v30 = v28 & 1;
        if ( v29 )
        {
          while ( 1 )
          {
            if ( *((_DWORD *)v20 + 12) < *(_DWORD *)(v29 + 24) )
            {
              v31 = *(_QWORD *)v29;
              if ( v30 )
              {
                if ( !v31 )
                  break;
                v31 ^= v29;
              }
              if ( !v31 )
                break;
            }
            else
            {
              v31 = *(_QWORD *)(v29 + 8);
              if ( v30 )
              {
                if ( !v31 )
                  goto LABEL_50;
                v31 ^= v29;
              }
              if ( !v31 )
              {
LABEL_50:
                v5 = 1;
                break;
              }
            }
            v29 = v31;
          }
        }
        LOBYTE(v9) = RtlRbInsertNodeEx(v27, (PRTL_BALANCED_NODE)v29, v5, (PRTL_BALANCED_NODE)v20 + 1);
        return v9;
      }
      if ( v17 <= v18 )
      {
        *(_DWORD *)(a4 + 48) = v14;
        *(_DWORD *)(a4 + 52) = v18;
        v32 = *(_DWORD *)(a1 + 140);
        if ( v32 <= v17 )
          v32 = v17;
      }
      else
      {
        *(_DWORD *)(a4 + 52) = v17;
        v32 = *(_DWORD *)(a1 + 140);
        if ( v32 <= v18 )
          v32 = v18;
      }
      *(_DWORD *)(a1 + 140) = v32;
      v33 = a4;
    }
    LOBYTE(v9) = MiBitmapsCachedEntryLengthChanged(a1, v33, 0LL);
    return v9;
  }
  v8 = a1 + 160;
  v9 = *(_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)v8;
  if ( (v9 & 1) != 0 )
  {
    if ( v10 )
      v10 ^= v8;
    else
      v10 = 0LL;
  }
  v11 = v9 & 1;
  while ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 24);
    if ( a2 + a3 <= v12 )
    {
      v9 = *(_QWORD *)v10;
    }
    else
    {
      if ( a2 < *(_DWORD *)(v10 + 28) + v12 )
      {
        a4 = v10 - 24;
        goto LABEL_18;
      }
      v9 = *(_QWORD *)(v10 + 8);
    }
    if ( v11 && v9 )
      v10 ^= v9;
    else
      v10 = v9;
  }
  return v9;
}
