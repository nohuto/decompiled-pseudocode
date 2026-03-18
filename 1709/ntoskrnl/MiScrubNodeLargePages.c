/*
 * XREFs of MiScrubNodeLargePages @ 0x1406ED858
 * Callers:
 *     MiScrubNode @ 0x140238CDC (MiScrubNode.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiDeleteUltraThreadContext @ 0x1400CF060 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1400CF818 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 */

__int64 __fastcall MiScrubNodeLargePages(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 *v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r12d
  __int64 result; // rax
  int v13; // r15d
  _WORD *v14; // r8
  __int16 v15; // ax
  __int64 v16; // rdi
  _QWORD *v17; // r13
  int v18; // r14d
  int i; // ebx
  __int64 v20; // rsi
  unsigned int v21; // r15d
  __int64 v22; // rdx
  int v23; // eax
  int v24; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  _WORD *v33; // [rsp+90h] [rbp-70h] BYREF
  __int16 v34; // [rsp+98h] [rbp-68h]
  unsigned __int16 v35; // [rsp+9Ah] [rbp-66h]
  _BYTE v36[128]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a3;
  v32 = a2;
  v31 = a1;
  v30 = a4;
  memset(v36, 0, sizeof(v36));
  v6 = MiLargePageSizes;
  v7 = 8256 * v4 + *(_QWORD *)(a2 + 16);
  v8 = 0LL;
  v29 = v7;
  v9 = (_QWORD *)v7;
  v10 = 3LL;
  v11 = 1;
  do
  {
    result = *v9 + v9[1];
    if ( result )
    {
      result *= *v6;
      v8 += result;
    }
    v9 += 2;
    ++v6;
    --v10;
  }
  while ( v10 );
  v28 = v8;
  if ( v8 )
  {
    v13 = 0;
    v27 = 0LL;
    v24 = 0;
    MiInitializePageColorBase(0LL, v4 + 1, (__int64)&v33);
    v14 = v33;
    v15 = v34;
    ++*v33;
    result = MiCreateUltraThreadContext((__int64)v36, v35 | (unsigned int)(unsigned __int16)(v15 & *v14), 7);
    if ( (_DWORD)result )
    {
      v16 = 0LL;
      v17 = (_QWORD *)v7;
      do
      {
        v26 = *v17 + v17[1];
        if ( v26 )
        {
          v18 = 0;
          while ( 2 )
          {
            for ( i = 1; ; --i )
            {
              if ( !i && !v13 )
              {
                _InterlockedAdd(&dword_140389290, 1u);
                v24 = 1;
              }
              v20 = 0LL;
              if ( MmNumberOfChannels )
              {
                while ( 1 )
                {
                  if ( (_DWORD)v16 == 2 )
                    v11 = dword_140388550;
                  v21 = 0;
                  if ( v11 )
                    break;
LABEL_25:
                  v11 = 1;
                  v20 = (unsigned int)(v20 + 1);
                  if ( (unsigned int)v20 >= MmNumberOfChannels )
                    goto LABEL_26;
                }
                while ( 1 )
                {
                  v22 = (_DWORD)v16 == 2
                      ? 16 * (v20 + 4 * (i + 2LL * v18)) + v21 + 59LL
                      : (unsigned int)v20 + 4 * (i + 2 * (v18 + 2 * v16)) + 27;
                  if ( *(_QWORD *)(v29 + 16 * v22) != v29 + 16 * v22 )
                  {
                    v26 = v28 - v27;
                    v23 = MiScrubNodeLargePageList(v32, a3, v16, v18, i, v20, &v26, v31, v30, (__int64)v36);
                    v27 += v26;
                    if ( v27 >= v28 || !v23 )
                      goto LABEL_30;
                  }
                  if ( ++v21 >= v11 )
                    goto LABEL_25;
                }
              }
LABEL_26:
              v13 = v24;
              if ( !i )
                break;
            }
            if ( ++v18 <= 1 )
              continue;
            break;
          }
        }
        v16 = (unsigned int)(v16 + 1);
        v17 += 2;
      }
      while ( (unsigned int)v16 < 3 );
LABEL_30:
      if ( v24 == 1 )
        _InterlockedDecrement(&dword_140389290);
      return MiDeleteUltraThreadContext((__int64)v36);
    }
  }
  return result;
}
