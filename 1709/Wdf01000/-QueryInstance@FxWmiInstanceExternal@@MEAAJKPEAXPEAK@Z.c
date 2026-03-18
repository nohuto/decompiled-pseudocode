/*
 * XREFs of ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C0071BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qddq @ 0x1C00721D4 (WPP_IFR_SF_qddq.c)
 */

__int64 __fastcall FxWmiInstanceExternal::QueryInstance(
        FxWmiInstanceExternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  char *v4; // rbx
  unsigned int _a4; // r11d
  unsigned int v8; // esi
  unsigned __int16 v9; // ax
  const void *_a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, void *, unsigned int *); // rax
  unsigned __int8 *v13; // r12
  unsigned int _a3; // r15d
  const void *v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // dl
  unsigned int v18; // r8d
  unsigned __int16 v19; // r9
  int v20; // eax
  FxWmiProvider *m_Provider; // rcx
  int m_MinInstanceBufferSize; // edx
  unsigned __int16 v23; // ax
  const void *v24; // rcx
  __int64 v25; // rax
  const void *v26; // rcx
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  unsigned __int8 dummy[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( this->m_UseContextForQuery )
  {
    *BufferUsed = this->m_ContextLength;
    _a4 = this->m_ContextLength;
    if ( OutBufferSize >= _a4 )
    {
      m_ObjectSize = this->m_ObjectSize;
      v8 = 0;
      if ( m_ObjectSize )
        v4 = (char *)this + m_ObjectSize;
      memmove(OutBuffer, v4 + 48, this->m_ContextLength);
    }
    else
    {
      v8 = -1073741789;
      v9 = this->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v9 )
        _a2 = 0LL;
      WPP_IFR_SF_qddd(
        this->m_Globals,
        OutBufferSize,
        0x12u,
        0x12u,
        WPP_FxWmiInstance_cpp_Traceguids,
        _a2,
        OutBufferSize,
        _a4,
        -1073741789);
    }
    return v8;
  }
  m_Method = this->m_QueryInstanceCallback.m_Method;
  if ( !m_Method )
  {
    v25 = this->m_ObjectSize;
    v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)v25 )
      v26 = 0LL;
    WPP_IFR_SF_qq(
      this->m_Globals,
      2u,
      0xCu,
      0x17u,
      WPP_FxWmiInstance_cpp_Traceguids,
      v26,
      this->m_ExecuteMethodCallback.m_Method);
    v8 = 0;
    goto LABEL_37;
  }
  v13 = dummy;
  _a3 = 1;
  if ( OutBufferSize )
  {
    v13 = (unsigned __int8 *)OutBuffer;
    _a3 = OutBufferSize;
  }
  v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v16 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !this->m_ObjectSize )
    v16 = 0LL;
  v8 = m_Method((WDFWMIINSTANCE__ *)v16, _a3, v13, BufferUsed);
  if ( v8 == 259 )
  {
    if ( !this->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiInstance_cpp_Traceguids, v15, 259);
LABEL_18:
    FxVerifierDbgBreakPoint(this->m_Globals);
    v8 = -1073741823;
LABEL_37:
    *BufferUsed = 0;
    return v8;
  }
  if ( (v8 & 0x80000000) != 0 )
  {
    if ( v8 == -1073741789 )
    {
      m_Provider = this->m_Provider;
      m_MinInstanceBufferSize = m_Provider->m_MinInstanceBufferSize;
      if ( m_MinInstanceBufferSize )
      {
        v23 = m_Provider->m_ObjectSize;
        v24 = (const void *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v23 )
          v24 = 0LL;
        if ( !this->m_ObjectSize )
          v15 = 0LL;
        WPP_IFR_SF_qddq(
          this->m_Globals,
          m_MinInstanceBufferSize,
          v18,
          v19,
          _a1,
          v15,
          -1073741789,
          m_MinInstanceBufferSize,
          v24);
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiInstance_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  else
  {
    v20 = *BufferUsed;
    if ( *BufferUsed > _a3 )
    {
      if ( !this->m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qddd(this->m_Globals, v17, 0xCu, 0x14u, WPP_FxWmiInstance_cpp_Traceguids, v15, _a3, v20, v8);
      goto LABEL_18;
    }
    if ( v13 == dummy && v20 )
      return (unsigned int)-1073741789;
  }
  return v8;
}
