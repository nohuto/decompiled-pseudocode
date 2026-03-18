/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DFAE4
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EA544 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C00F0538 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E0CB0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E13A8 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01E1480 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01E1518 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        int a2,
        CCD_TOPOLOGY *a3,
        unsigned __int16 *a4)
{
  __int64 v5; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __m128i *v17; // r12
  unsigned int v18; // esi
  unsigned int i; // r15d
  __int64 v20; // rbp
  int v21; // eax
  CCD_TOPOLOGY *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // rcx
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // ax
  __int64 v31; // rax
  unsigned __int16 v32; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v34; // ecx
  unsigned int v35; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+28h] [rbp-60h] BYREF
  int v37; // [rsp+38h] [rbp-50h]

  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  v5 = a2;
  CCD_TOPOLOGY::Clear(a3);
  v10 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12), v7, v8, v9);
  v14 = v10;
  if ( v10 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11, 0LL);
    v15[3] = v14;
LABEL_3:
    v15[4] = v5;
    v15[5] = *(_QWORD *)this;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v14;
  }
  v17 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v37 = 8;
  LODWORD(v14) = -1073741811;
  v18 = 0;
  v35 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v20 = v17->m128i_i32[0];
    if ( ((unsigned int)v5 & v17->m128i_i32[0]) != (_DWORD)v20 )
      goto LABEL_21;
    switch ( (_DWORD)v20 )
    {
      case 1:
        v21 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
LABEL_18:
        LODWORD(v14) = v21;
        if ( v21 >= 0 )
          goto LABEL_24;
        goto LABEL_19;
      case 2:
        v21 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
        goto LABEL_18;
      case 4:
        v21 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
        goto LABEL_18;
    }
    v11 = (unsigned int)(v20 - 8);
    if ( (_DWORD)v20 == 8 )
    {
      v21 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
      goto LABEL_18;
    }
    if ( (_DWORD)v20 == 15 )
    {
      v21 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(this, &v35);
      v18 = v35;
      goto LABEL_18;
    }
    LODWORD(v14) = -1073741811;
LABEL_19:
    if ( (_DWORD)v20 == 15 )
      break;
    v22 = *(CCD_TOPOLOGY **)this;
    *((_DWORD *)this + 2) = 0;
    CCD_TOPOLOGY::Clear(v22);
    v18 = 0;
    v35 = 0;
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    v27[3] = (int)v14;
    v27[4] = v20;
    v27[5] = *(_QWORD *)this;
    WdLogEvent5_WdWarning(v27);
LABEL_21:
    v17 = (__m128i *)((char *)v17 + 4);
  }
  if ( (int)v14 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11, 0LL);
    v15[3] = (int)v14;
    goto LABEL_3;
  }
LABEL_24:
  v28 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v28 )
    v29 = *(_WORD *)(v28 + 22);
  else
    v29 = 0;
  v30 = *((_WORD *)this + 4);
  if ( v30 <= v29 )
  {
    while ( 1 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v32 = v31 ? *(_WORD *)(v31 + 20) : 0;
      if ( v18 >= v32 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v18, v12, v13);
      v34 = v18;
      if ( *((_BYTE *)this + 11) )
        v34 = 0;
      *((_DWORD *)PathDescriptor + 58) = v34 | 0xFE530000;
      *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
      ++v18;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v30;
    LODWORD(v14) = -1073741789;
  }
  return (unsigned int)v14;
}
