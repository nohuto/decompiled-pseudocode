/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C0227444
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C00AFA2C (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B358C (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0228918 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C0228A04 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0229028 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0229100 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0229270 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        int a2,
        CCD_TOPOLOGY *a3,
        unsigned __int16 *a4)
{
  __int64 v5; // r14
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __m128i *v12; // r12
  unsigned int v13; // esi
  unsigned int i; // r15d
  __int64 v15; // rbp
  int v16; // eax
  CCD_TOPOLOGY *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int16 v23; // dx
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v28; // ecx
  unsigned int v29; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+28h] [rbp-60h] BYREF
  int v31; // [rsp+38h] [rbp-50h]

  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  v5 = a2;
  CCD_TOPOLOGY::Clear(a3);
  v7 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12));
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v10[3] = v9;
LABEL_3:
    v10[4] = v5;
    v10[5] = *(_QWORD *)this;
    WdLogEvent5_WdError(v10);
    return (unsigned int)v9;
  }
  v12 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v31 = 8;
  LODWORD(v9) = -1073741811;
  v13 = 0;
  v29 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v15 = v12->m128i_i32[0];
    if ( ((unsigned int)v5 & v12->m128i_i32[0]) != (_DWORD)v15 )
      goto LABEL_21;
    switch ( (_DWORD)v15 )
    {
      case 1:
        v16 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
LABEL_18:
        LODWORD(v9) = v16;
        if ( v16 >= 0 )
          goto LABEL_24;
        goto LABEL_19;
      case 2:
        v16 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
        goto LABEL_18;
      case 4:
        v16 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
        goto LABEL_18;
    }
    v8 = (unsigned int)(v15 - 8);
    if ( (_DWORD)v15 == 8 )
    {
      v16 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
      goto LABEL_18;
    }
    if ( (_DWORD)v15 == 15 )
    {
      v16 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(this, &v29);
      v13 = v29;
      goto LABEL_18;
    }
    LODWORD(v9) = -1073741811;
LABEL_19:
    if ( (_DWORD)v15 == 15 )
      break;
    v17 = *(CCD_TOPOLOGY **)this;
    *((_DWORD *)this + 2) = 0;
    CCD_TOPOLOGY::Clear(v17);
    v13 = 0;
    v29 = 0;
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v21[3] = (int)v9;
    v21[4] = v15;
    v21[5] = *(_QWORD *)this;
    WdLogEvent5_WdWarning(v21);
LABEL_21:
    v12 = (__m128i *)((char *)v12 + 4);
  }
  if ( (int)v9 < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v10[3] = (int)v9;
    goto LABEL_3;
  }
LABEL_24:
  v22 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v22 )
    v23 = *(_WORD *)(v22 + 22);
  else
    v23 = 0;
  v24 = *((_WORD *)this + 4);
  if ( v24 <= v23 )
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v26 = v25 ? *(_WORD *)(v25 + 20) : 0;
      if ( v13 >= v26 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v13);
      v28 = v13;
      if ( *((_BYTE *)this + 11) )
        v28 = 0;
      *((_DWORD *)PathDescriptor + 46) = v28 | 0xFE530000;
      *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
      ++v13;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v24;
    LODWORD(v9) = -1073741789;
  }
  return (unsigned int)v9;
}
