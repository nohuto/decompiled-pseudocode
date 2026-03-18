/*
 * XREFs of KiSetProcessorSignature @ 0x140403B40
 * Callers:
 *     KiSetFeatureBits @ 0x14040FD30 (KiSetFeatureBits.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  ULONG_PTR v13; // r12
  ULONG_PTR v14; // r15
  int v15; // r11d
  unsigned int v16; // r10d
  unsigned int *v17; // rsi
  ULONG_PTR v18; // r9
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  int v26; // edx
  int v27; // edx
  __int64 i; // r8
  unsigned int *v29; // rsi
  unsigned int v30; // edx
  unsigned int v31; // ecx
  ULONG_PTR v32; // rdx
  unsigned __int64 v33; // r11
  __int64 j; // rbx
  unsigned int v35; // ecx
  unsigned int v36; // r10d
  int v37; // edx
  int v38; // edx
  __int64 result; // rax
  unsigned int v40; // [rsp+30h] [rbp-88h]
  unsigned int v41; // [rsp+40h] [rbp-78h]
  unsigned int v42; // [rsp+48h] [rbp-70h]
  unsigned __int64 v43; // [rsp+70h] [rbp-48h]
  unsigned __int64 v44; // [rsp+78h] [rbp-40h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v41 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v42 = _RAX;
  v43 = __PAIR64__(_RBX, _RAX);
  v44 = __PAIR64__(_RDX, _RCX);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  v40 = 0;
  v17 = (unsigned int *)&unk_14029BFBC;
  v18 = KeFeatureBits2;
  do
  {
    v19 = *v17;
    if ( (*v17 & 2) != 0 )
      goto LABEL_41;
    if ( HIBYTE(v19) )
    {
      v20 = HIBYTE(v19);
      if ( !_bittest((const int *)&v20, *(unsigned __int8 *)(a1 + 141)) )
        goto LABEL_41;
    }
    _RAX = *(v17 - 3);
    if ( (_DWORD)_RAX != v15 )
    {
      v15 = *(v17 - 3);
      if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v41) && (unsigned int)_RAX > v42 )
      {
        v43 = 0LL;
        v44 = 0LL;
      }
      else
      {
        __asm { cpuid }
        v43 = __PAIR64__(_RBX, _RAX);
        v44 = __PAIR64__(_RDX, _RCX);
      }
    }
    v26 = 0;
    if ( (*((_DWORD *)&v43 + (int)*(v17 - 1)) & *(v17 - 2)) == 0 )
    {
      if ( (v19 & 8) == 0 || (v13 & *(_QWORD *)(v17 + 1)) != *(_QWORD *)(v17 + 1) )
      {
        if ( (v19 & 0x10) != 0 && (v14 & *(_QWORD *)(v17 + 1)) == *(_QWORD *)(v17 + 1) )
          v26 = 1;
        if ( !v26 )
        {
          if ( (v19 & 1) != 0 )
          {
            if ( !*(_DWORD *)(a1 + 36) )
              KdInitSystem(0LL, KeLoaderBlock_0);
            KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, *(v17 - 3), *(v17 - 2), (int)*(v17 - 1));
          }
          if ( (v19 & 4) != 0 && *(_DWORD *)(a1 + 36) )
          {
            if ( (v19 & 8) != 0 )
            {
              LOBYTE(v26) = (KeFeatureBits & *(_QWORD *)(v17 + 1)) == *(_QWORD *)(v17 + 1);
            }
            else if ( (v19 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(v17 + 1)) == *(_QWORD *)(v17 + 1) )
            {
LABEL_43:
              if ( !*(_DWORD *)(a1 + 36) )
                KdInitSystem(0LL, KeLoaderBlock_0);
              KeBugCheckEx(0x5Du, 0xFFFFFFFEuLL, *(v17 - 3), *(v17 - 2), (int)*(v17 - 1));
            }
            if ( v26 )
              goto LABEL_43;
          }
          v16 = v40;
          goto LABEL_41;
        }
      }
      v16 = v40;
    }
    if ( (v19 & 8) != 0 )
    {
      v13 |= *(_QWORD *)(v17 + 1);
    }
    else if ( (v19 & 0x10) != 0 )
    {
      v14 |= *(_QWORD *)(v17 + 1);
    }
    if ( (v19 & 4) != 0 && *(_DWORD *)(a1 + 36) )
    {
      v27 = 0;
      if ( (v19 & 8) != 0 )
      {
        LOBYTE(v27) = (KeFeatureBits & *(_QWORD *)(v17 + 1)) == *(_QWORD *)(v17 + 1);
      }
      else if ( (v19 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(v17 + 1)) == *(_QWORD *)(v17 + 1) )
      {
        goto LABEL_41;
      }
      if ( !v27 )
      {
        if ( !*(_DWORD *)(a1 + 36) )
          KdInitSystem(0LL, KeLoaderBlock_0);
        KeBugCheckEx(0x5Du, 0xFFFFFFFDuLL, *(v17 - 3), *(v17 - 2), (int)*(v17 - 1));
      }
    }
LABEL_41:
    v40 = ++v16;
    v17 += 6;
  }
  while ( v16 < 9 );
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    v29 = (unsigned int *)((char *)&KiMsrFeatureTable + 24 * i);
    v30 = v29[1];
    if ( (v30 & 2) == 0 )
    {
      if ( !HIBYTE(v30) || (v31 = HIBYTE(v30), _bittest((const int *)&v31, *(unsigned __int8 *)(a1 + 141))) )
      {
        if ( (v30 & 8) != 0 )
        {
          v32 = v13;
        }
        else
        {
          if ( (v30 & 0x10) == 0 )
            continue;
          v32 = v14;
        }
        if ( (v32 & *((_QWORD *)v29 + 2)) == *((_QWORD *)v29 + 2) )
        {
          v33 = __readmsr(*v29);
          for ( j = *((_QWORD *)v29 + 1); *(_QWORD *)j; j += 24LL )
          {
            v35 = *(_DWORD *)(j + 8);
            if ( (v35 & 2) == 0 )
            {
              if ( !HIBYTE(v35) || (v36 = HIBYTE(v35), _bittest((const int *)&v36, *(unsigned __int8 *)(a1 + 141))) )
              {
                if ( (*(_QWORD *)j & v33) != 0 )
                {
                  if ( (v35 & 8) != 0 )
                  {
                    v13 |= *(_QWORD *)(j + 16);
                  }
                  else if ( (v35 & 0x10) != 0 )
                  {
                    v14 |= *(_QWORD *)(j + 16);
                  }
                  if ( (v35 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v38 = 0;
                    if ( (v35 & 8) != 0 )
                    {
                      LOBYTE(v38) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v35 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
                      continue;
                    }
                    if ( !v38 )
                    {
                      if ( !*(_DWORD *)(a1 + 36) )
                        KdInitSystem(0LL, KeLoaderBlock_0);
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v29, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                    }
                  }
                }
                else
                {
                  if ( (v35 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                      KdInitSystem(0LL, KeLoaderBlock_0);
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v29, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                  }
                  if ( (v35 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v37 = 0;
                    if ( (v35 & 8) != 0 )
                    {
                      LOBYTE(v37) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v35 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
LABEL_89:
                      if ( !*(_DWORD *)(a1 + 36) )
                        KdInitSystem(0LL, KeLoaderBlock_0);
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v29, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                    }
                    if ( v37 )
                      goto LABEL_89;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    KeGetPrcb(0);
    v18 = KeFeatureBits2;
  }
  *(_DWORD *)(a1 + 1728) = a2;
  *(_QWORD *)(a1 + 25576) |= v13;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( v14 != v18 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v14, v18, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 = v14 | v18;
  }
  return result;
}
