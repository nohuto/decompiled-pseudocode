/*
 * XREFs of ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800CDABC
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003F614 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x18019CD30 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

char __fastcall CSwapChainBase::TryToOrderMetaData(CSwapChainBase *this)
{
  char v1; // r14
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  __int64 v6; // r14
  __int64 *v7; // rsi
  unsigned int v8; // r15d
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  char v14; // r13
  int v15; // r10d
  bool v16; // zf
  unsigned int v17; // ecx
  char v18; // r11
  unsigned int v19; // r9d
  __int64 v20; // r8
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  int v23; // edx
  unsigned int v24; // ebx
  __int64 v25; // r11
  __int64 v26; // r8
  bool v27; // al
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int64 v31; // rax
  unsigned int i; // ebx
  __int128 v33; // [rsp+40h] [rbp-31h] BYREF
  __int64 v34; // [rsp+50h] [rbp-21h]
  unsigned int v35; // [rsp+58h] [rbp-19h]
  unsigned int v36; // [rsp+60h] [rbp-11h]
  __int128 v37; // [rsp+68h] [rbp-9h] BYREF
  __int128 v38; // [rsp+78h] [rbp+7h]

  v1 = 1;
  v3 = 0;
  v34 = 0LL;
  v4 = 0;
  v35 = 0;
  v33 = 0LL;
  if ( !*((_DWORD *)this + 64) )
    goto LABEL_2;
  v6 = v33;
  v7 = (__int64 *)((char *)this + 232);
  v8 = v36;
  do
  {
    v9 = *(_OWORD *)(*v7 + 48LL * v3 + 16);
    v10 = *(_OWORD *)(*v7 + 48LL * v3 + 32);
    if ( *(_DWORD *)(*v7 + 48LL * v3) == 1 )
    {
      v11 = v4 + 1;
      v37 = *(_OWORD *)(*v7 + 48LL * v3 + 16);
      if ( v4 + 1 >= v4 )
        v8 = v4 + 1;
      v38 = v10;
      if ( v11 < v4 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11 < v4 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v8 > HIDWORD(v34) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v33, 0x20u, 1, &v37);
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
        v4 = v35;
        v6 = v33;
      }
      else
      {
        v12 = v4;
        v4 = v8;
        v12 *= 32LL;
        v35 = v8;
        *(_OWORD *)(v12 + v6) = v9;
        *(_OWORD *)(v12 + v6 + 16) = v38;
      }
    }
    ++v3;
  }
  while ( v3 < *((_DWORD *)this + 64) );
  v14 = 0;
  if ( !v4 )
  {
    v1 = 1;
    goto LABEL_2;
  }
  v15 = *(_DWORD *)(v6 + 16);
  v16 = (double)v15 == 0.0;
  if ( (double)v15 == 0.0 )
    goto LABEL_19;
  if ( (double)*(int *)(v6 + 20) == 0.0 )
  {
    v16 = (double)v15 == 0.0;
LABEL_19:
    if ( !v16 )
      v14 = 1;
    if ( v4 == 1 )
      goto LABEL_61;
    v17 = *((_DWORD *)this + 64);
    v18 = 1;
    v19 = 0;
    if ( v17 )
    {
      v20 = *v7;
      do
      {
        if ( *(_DWORD *)(v20 + 48LL * v19) == 1 )
        {
          if ( v18 )
          {
            v18 = 0;
          }
          else if ( v14 )
          {
            if ( *(_DWORD *)(v20 + 48LL * v19 + 32) != v15 || (double)*(int *)(v20 + 48LL * v19 + 36) != 0.0 )
            {
              v1 = 0;
              v21 = 0;
              do
              {
                if ( *(_DWORD *)(*v7 + 48LL * v21) == 1 )
                  DynArray<_DWMIndirectMetaData,0>::RemoveAt(v7, v21--);
                ++v21;
              }
              while ( v21 < *((_DWORD *)this + 64) );
              goto LABEL_62;
            }
          }
          else if ( *(_DWORD *)(v20 + 48LL * v19 + 36) != *(_DWORD *)(v6 + 20)
                 || (double)*(int *)(v20 + 48LL * v19 + 32) != 0.0 )
          {
            v1 = 0;
            v22 = 0;
            do
            {
              if ( *(_DWORD *)(*v7 + 48LL * v22) == 1 )
                DynArray<_DWMIndirectMetaData,0>::RemoveAt(v7, v22--);
              ++v22;
            }
            while ( v22 < *((_DWORD *)this + 64) );
            goto LABEL_62;
          }
        }
      }
      while ( ++v19 < v17 );
    }
    if ( v14 )
    {
      v23 = 1;
      if ( v15 <= 0 )
        v23 = -1;
    }
    else
    {
      v23 = -1;
      if ( *(int *)(v6 + 20) > 0 )
        v23 = 1;
    }
    v24 = 0;
    if ( v17 == 1 )
    {
LABEL_61:
      v1 = 1;
      goto LABEL_62;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)(*v7 + 48LL * v24) == 1 )
      {
        v25 = v24 + 1;
        if ( (unsigned int)v25 < v17 )
          break;
      }
LABEL_60:
      v17 = *((_DWORD *)this + 64);
      if ( ++v24 >= v17 - 1 )
        goto LABEL_61;
    }
    while ( 1 )
    {
      v26 = *v7;
      if ( *(_DWORD *)(*v7 + 48 * v25) == 1 )
      {
        if ( v14 )
        {
          v27 = v23 * *(_DWORD *)(v26 + 48LL * v24 + 16) < v23 * *(_DWORD *)(v26 + 48 * v25 + 16);
          goto LABEL_57;
        }
        if ( v23 * *(_DWORD *)(v26 + 48LL * v24 + 20) < v23 * *(_DWORD *)(v26 + 48 * v25 + 20) )
        {
          v27 = 1;
LABEL_57:
          if ( v27 )
          {
            v28 = *(_OWORD *)(v26 + 48LL * v24);
            v29 = *(_OWORD *)(v26 + 48LL * v24 + 16);
            v30 = *(_OWORD *)(v26 + 48LL * v24 + 32);
            *(_OWORD *)(v26 + 48LL * v24) = *(_OWORD *)(v26 + 48 * v25);
            *(_OWORD *)(v26 + 48LL * v24 + 16) = *(_OWORD *)(v26 + 48 * v25 + 16);
            *(_OWORD *)(v26 + 48LL * v24 + 32) = *(_OWORD *)(v26 + 48 * v25 + 32);
            v31 = *v7;
            *(_OWORD *)(v31 + 48 * v25) = v28;
            *(_OWORD *)(v31 + 48 * v25 + 16) = v29;
            *(_OWORD *)(v31 + 48 * v25 + 32) = v30;
          }
        }
      }
      v25 = (unsigned int)(v25 + 1);
      if ( (unsigned int)v25 >= *((_DWORD *)this + 64) )
        goto LABEL_60;
    }
  }
  if ( v4 <= 1 )
  {
    v1 = 1;
  }
  else
  {
    v1 = 0;
    for ( i = 0; i < *((_DWORD *)this + 64); ++i )
    {
      if ( *(_DWORD *)(*v7 + 48LL * i) == 1 )
        DynArray<_DWMIndirectMetaData,0>::RemoveAt(v7, i--);
    }
  }
LABEL_62:
  v35 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v33, 0x20u);
LABEL_2:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v33);
  return v1;
}
