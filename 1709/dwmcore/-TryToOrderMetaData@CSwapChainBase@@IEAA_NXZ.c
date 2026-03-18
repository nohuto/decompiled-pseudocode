/*
 * XREFs of ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1801B331C
 * Callers:
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002F980 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x1801B2118 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 */

char __fastcall CSwapChainBase::TryToOrderMetaData(CSwapChainBase *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // r12d
  char v4; // r13
  __int64 v5; // r14
  __int64 *v6; // rdi
  unsigned int v7; // r15d
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  unsigned int v10; // eax
  __int64 v11; // rax
  signed int v12; // eax
  unsigned int v13; // ecx
  int v14; // r10d
  bool v15; // zf
  char v16; // r15
  __int64 v17; // r9
  char v18; // r11
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // edx
  __int64 v23; // r10
  __int64 v24; // rbx
  __int64 v25; // r8
  bool v26; // al
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int64 v30; // rax
  __int64 v31; // rbx
  __int128 v33; // [rsp+40h] [rbp-31h] BYREF
  __int64 v34; // [rsp+50h] [rbp-21h]
  unsigned int v35; // [rsp+58h] [rbp-19h]
  unsigned int v36; // [rsp+60h] [rbp-11h]
  __int128 v37; // [rsp+68h] [rbp-9h] BYREF
  __int128 v38; // [rsp+78h] [rbp+7h]

  v2 = 0;
  v34 = 0LL;
  v3 = 0;
  v35 = 0;
  v4 = 1;
  v33 = 0LL;
  if ( *((_DWORD *)this + 92) )
  {
    v5 = v33;
    v6 = (__int64 *)((char *)this + 344);
    v7 = v36;
    do
    {
      v8 = *(_OWORD *)(*v6 + 48LL * v3 + 16);
      v9 = *(_OWORD *)(*v6 + 48LL * v3 + 32);
      if ( *(_DWORD *)(*v6 + 48LL * v3) == 1 )
      {
        v10 = v2 + 1;
        v37 = *(_OWORD *)(*v6 + 48LL * v3 + 16);
        if ( v2 + 1 >= v2 )
          v7 = v2 + 1;
        v38 = v9;
        if ( v10 < v2 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10 < v2 ? 0x80070216 : 0, 0xB5u);
        }
        else if ( v7 > HIDWORD(v34) )
        {
          v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v33, 0x20u, 1, &v37);
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xC0u);
          v2 = v35;
          v5 = v33;
        }
        else
        {
          v11 = v2;
          v2 = v7;
          v11 *= 32LL;
          v35 = v7;
          *(_OWORD *)(v11 + v5) = v8;
          *(_OWORD *)(v11 + v5 + 16) = v38;
        }
      }
      v13 = *((_DWORD *)this + 92);
      ++v3;
    }
    while ( v3 < v13 );
    if ( v2 )
    {
      v14 = *(_DWORD *)(v5 + 16);
      v15 = (double)v14 == 0.0;
      if ( (double)v14 == 0.0 )
      {
LABEL_18:
        v16 = !v15;
        if ( v2 == 1 )
          goto LABEL_67;
        v17 = 0LL;
        v18 = 1;
        if ( v13 )
        {
          v19 = *v6;
          do
          {
            if ( *(_DWORD *)(v19 + 48 * v17) == 1 )
            {
              if ( v18 )
              {
                v18 = 0;
              }
              else if ( v16 )
              {
                if ( *(_DWORD *)(v19 + 48 * v17 + 32) != v14 || (double)*(int *)(v19 + 48 * v17 + 36) != 0.0 )
                {
                  v4 = 0;
                  v20 = 0LL;
                  do
                  {
                    if ( *(_DWORD *)(*v6 + 48 * v20) == 1 )
                    {
                      DynArray<_DWMIndirectMetaData,0>::RemoveAt(v6, v20);
                      LODWORD(v20) = v20 - 1;
                    }
                    v20 = (unsigned int)(v20 + 1);
                  }
                  while ( (unsigned int)v20 < *((_DWORD *)this + 92) );
                  goto LABEL_67;
                }
              }
              else if ( *(_DWORD *)(v19 + 48 * v17 + 36) != *(_DWORD *)(v5 + 20)
                     || (double)*(int *)(v19 + 48 * v17 + 32) != 0.0 )
              {
                v4 = 0;
                v21 = 0LL;
                do
                {
                  if ( *(_DWORD *)(*v6 + 48 * v21) == 1 )
                  {
                    DynArray<_DWMIndirectMetaData,0>::RemoveAt(v6, v21);
                    LODWORD(v21) = v21 - 1;
                  }
                  v21 = (unsigned int)(v21 + 1);
                }
                while ( (unsigned int)v21 < *((_DWORD *)this + 92) );
                goto LABEL_67;
              }
            }
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < v13 );
        }
        if ( v16 )
        {
          v22 = 1;
          if ( v14 <= 0 )
            v22 = -1;
        }
        else
        {
          v22 = -1;
          if ( *(int *)(v5 + 20) > 0 )
            v22 = 1;
        }
        v23 = 0LL;
        if ( v13 == 1 )
          goto LABEL_67;
        while ( 1 )
        {
          if ( *(_DWORD *)(*v6 + 48 * v23) == 1 )
          {
            v24 = (unsigned int)(v23 + 1);
            if ( (unsigned int)v24 < v13 )
              break;
          }
LABEL_60:
          v13 = *((_DWORD *)this + 92);
          v23 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v23 >= v13 - 1 )
            goto LABEL_67;
        }
        while ( 1 )
        {
          v25 = *v6;
          if ( *(_DWORD *)(*v6 + 48 * v24) == 1 )
          {
            if ( v16 )
            {
              v26 = v22 * *(_DWORD *)(v25 + 48 * v23 + 16) < v22 * *(_DWORD *)(v25 + 48 * v24 + 16);
              goto LABEL_57;
            }
            if ( v22 * *(_DWORD *)(v25 + 48 * v23 + 20) < v22 * *(_DWORD *)(v25 + 48 * v24 + 20) )
            {
              v26 = 1;
LABEL_57:
              if ( v26 )
              {
                v27 = *(_OWORD *)(v25 + 48 * v23);
                v28 = *(_OWORD *)(v25 + 48 * v23 + 16);
                v29 = *(_OWORD *)(v25 + 48 * v23 + 32);
                *(_OWORD *)(v25 + 48 * v23) = *(_OWORD *)(v25 + 48 * v24);
                *(_OWORD *)(v25 + 48 * v23 + 16) = *(_OWORD *)(v25 + 48 * v24 + 16);
                *(_OWORD *)(v25 + 48 * v23 + 32) = *(_OWORD *)(v25 + 48 * v24 + 32);
                v30 = *v6;
                *(_OWORD *)(v30 + 48 * v24) = v27;
                *(_OWORD *)(v30 + 48 * v24 + 16) = v28;
                *(_OWORD *)(v30 + 48 * v24 + 32) = v29;
              }
            }
          }
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 >= *((_DWORD *)this + 92) )
            goto LABEL_60;
        }
      }
      if ( (double)*(int *)(v5 + 20) == 0.0 )
      {
        v15 = (double)v14 == 0.0;
        goto LABEL_18;
      }
      if ( v2 > 1 )
      {
        v4 = 0;
        v31 = 0LL;
        if ( v13 )
        {
          do
          {
            if ( *(_DWORD *)(*v6 + 48 * v31) == 1 )
            {
              DynArray<_DWMIndirectMetaData,0>::RemoveAt(v6, v31);
              LODWORD(v31) = v31 - 1;
            }
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < *((_DWORD *)this + 92) );
        }
      }
LABEL_67:
      v35 = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)&v33, 0x20u);
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v33);
  return v4;
}
