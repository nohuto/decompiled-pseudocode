/*
 * XREFs of ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800D7B74
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x1801EACC4 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

char __fastcall CSwapChainBase::TryToOrderMetaData(CSwapChainBase *this)
{
  char v2; // si
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  __int64 v6; // rsi
  __int64 *v7; // rdi
  unsigned int v8; // r15d
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edx
  char v15; // r13
  int v16; // r10d
  bool v17; // zf
  __int64 v18; // r9
  char v19; // r11
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rbx
  int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // rbx
  unsigned int v26; // r8d
  __int64 v27; // r11
  __int64 v28; // r8
  bool v29; // al
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  __int64 v33; // rax
  __int64 v34; // rbx
  __int128 v35; // [rsp+40h] [rbp-31h] BYREF
  __int64 v36; // [rsp+50h] [rbp-21h]
  unsigned int v37; // [rsp+58h] [rbp-19h]
  unsigned int v38; // [rsp+60h] [rbp-11h]
  __int128 v39; // [rsp+68h] [rbp-9h] BYREF
  __int128 v40; // [rsp+78h] [rbp+7h]

  v2 = 1;
  v3 = 0;
  v4 = 0;
  v36 = 0LL;
  v35 = 0LL;
  v37 = 0;
  if ( !*((_DWORD *)this + 92) )
    goto LABEL_2;
  v6 = v35;
  v7 = (__int64 *)((char *)this + 344);
  v8 = v38;
  do
  {
    v9 = *(_OWORD *)(*v7 + 48LL * v4 + 16);
    v10 = *(_OWORD *)(*v7 + 48LL * v4 + 32);
    if ( *(_DWORD *)(*v7 + 48LL * v4) == 1 )
    {
      v11 = v3 + 1;
      v39 = *(_OWORD *)(*v7 + 48LL * v4 + 16);
      if ( v3 + 1 >= v3 )
        v8 = v3 + 1;
      v40 = v10;
      if ( v11 < v3 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11 < v3 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v8 > HIDWORD(v36) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v35, 0x20u, 1, &v39);
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
        v3 = v37;
        v6 = v35;
      }
      else
      {
        v12 = v3;
        v3 = v8;
        v12 *= 32LL;
        v37 = v8;
        *(_OWORD *)(v12 + v6) = v9;
        *(_OWORD *)(v12 + v6 + 16) = v40;
      }
    }
    v14 = *((_DWORD *)this + 92);
    ++v4;
  }
  while ( v4 < v14 );
  v15 = 0;
  if ( !v3 )
  {
    v2 = 1;
    goto LABEL_2;
  }
  v16 = *(_DWORD *)(v6 + 16);
  v17 = (double)v16 == 0.0;
  if ( (double)v16 == 0.0 )
    goto LABEL_19;
  if ( (double)*(int *)(v6 + 20) == 0.0 )
  {
    v17 = (double)v16 == 0.0;
LABEL_19:
    if ( !v17 )
      v15 = 1;
    if ( v3 == 1 )
      goto LABEL_61;
    v18 = 0LL;
    v19 = 1;
    if ( v14 )
    {
      v20 = *v7;
      do
      {
        if ( *(_DWORD *)(v20 + 48 * v18) == 1 )
        {
          if ( v19 )
          {
            v19 = 0;
          }
          else if ( v15 )
          {
            if ( *(_DWORD *)(v20 + 48 * v18 + 32) != v16 || (double)*(int *)(v20 + 48 * v18 + 36) != 0.0 )
            {
              v2 = 0;
              v21 = 0LL;
              do
              {
                if ( *(_DWORD *)(*v7 + 48 * v21) == 1 )
                {
                  DynArray<_DWMIndirectMetaData,0>::RemoveAt(v7, (unsigned int)v21);
                  LODWORD(v21) = v21 - 1;
                }
                v21 = (unsigned int)(v21 + 1);
              }
              while ( (unsigned int)v21 < *((_DWORD *)this + 92) );
              goto LABEL_62;
            }
          }
          else if ( *(_DWORD *)(v20 + 48 * v18 + 36) != *(_DWORD *)(v6 + 20)
                 || (double)*(int *)(v20 + 48 * v18 + 32) != 0.0 )
          {
            v2 = 0;
            v22 = 0LL;
            do
            {
              if ( *(_DWORD *)(*v7 + 48 * v22) == 1 )
              {
                DynArray<_DWMIndirectMetaData,0>::RemoveAt(v7, (unsigned int)v22);
                LODWORD(v22) = v22 - 1;
              }
              v22 = (unsigned int)(v22 + 1);
            }
            while ( (unsigned int)v22 < *((_DWORD *)this + 92) );
            goto LABEL_62;
          }
        }
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < v14 );
    }
    if ( v15 )
    {
      v23 = 1;
      if ( v16 <= 0 )
        v23 = -1;
    }
    else
    {
      v23 = -1;
      if ( *(int *)(v6 + 20) > 0 )
        v23 = 1;
    }
    v24 = *((_DWORD *)this + 92);
    v25 = 0LL;
    if ( v24 == 1 )
    {
LABEL_61:
      v2 = 1;
      goto LABEL_62;
    }
    while ( 1 )
    {
      v26 = v24;
      if ( *(_DWORD *)(*v7 + 48 * v25) == 1 )
      {
        v27 = (unsigned int)(v25 + 1);
        if ( (unsigned int)v27 < v24 )
          break;
      }
LABEL_60:
      v25 = (unsigned int)(v25 + 1);
      v24 = v26;
      if ( (unsigned int)v25 >= v26 - 1 )
        goto LABEL_61;
    }
    while ( 1 )
    {
      v28 = *v7;
      if ( *(_DWORD *)(*v7 + 48 * v27) == 1 )
      {
        if ( v15 )
        {
          v29 = v23 * *(_DWORD *)(v28 + 48 * v25 + 16) < v23 * *(_DWORD *)(v28 + 48 * v27 + 16);
          goto LABEL_57;
        }
        if ( v23 * *(_DWORD *)(v28 + 48 * v25 + 20) < v23 * *(_DWORD *)(v28 + 48 * v27 + 20) )
        {
          v29 = 1;
LABEL_57:
          if ( v29 )
          {
            v30 = *(_OWORD *)(v28 + 48 * v25);
            v31 = *(_OWORD *)(v28 + 48 * v25 + 16);
            v32 = *(_OWORD *)(v28 + 48 * v25 + 32);
            *(_OWORD *)(v28 + 48 * v25) = *(_OWORD *)(v28 + 48 * v27);
            *(_OWORD *)(v28 + 48 * v25 + 16) = *(_OWORD *)(v28 + 48 * v27 + 16);
            *(_OWORD *)(v28 + 48 * v25 + 32) = *(_OWORD *)(v28 + 48 * v27 + 32);
            v33 = *v7;
            *(_OWORD *)(v33 + 48 * v27) = v30;
            *(_OWORD *)(v33 + 48 * v27 + 16) = v31;
            *(_OWORD *)(v33 + 48 * v27 + 32) = v32;
          }
        }
      }
      v26 = *((_DWORD *)this + 92);
      v27 = (unsigned int)(v27 + 1);
      if ( (unsigned int)v27 >= v26 )
        goto LABEL_60;
    }
  }
  if ( v3 <= 1 )
  {
    v2 = 1;
  }
  else
  {
    v2 = 0;
    v34 = 0LL;
    if ( v14 )
    {
      do
      {
        if ( *(_DWORD *)(*v7 + 48 * v34) == 1 )
        {
          DynArray<_DWMIndirectMetaData,0>::RemoveAt(v7, (unsigned int)v34);
          LODWORD(v34) = v34 - 1;
        }
        v34 = (unsigned int)(v34 + 1);
      }
      while ( (unsigned int)v34 < *((_DWORD *)this + 92) );
    }
  }
LABEL_62:
  v37 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v35, 0x20u);
LABEL_2:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v35);
  return v2;
}
