/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003331C
 * Callers:
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0032E40 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0067B50 (imp_WdfCommonBufferCreate.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qi @ 0x1C0068708 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C00687D0 (WPP_IFR_SF_qii.c)
 *     WPP_IFR_SF_qxx @ 0x1C006D854 (WPP_IFR_SF_qxx.c)
 */

__int64 __fastcall FxCommonBuffer::AllocateCommonBuffer(
        FxCommonBuffer *this,
        unsigned __int64 Length,
        __int64 a3,
        __int64 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 *p_m_Alignment; // r14
  unsigned __int64 m_Alignment; // r8
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  unsigned int v10; // edi
  unsigned __int64 m_RawLength; // rdx
  _LARGE_INTEGER *p_m_BufferRawLA; // r15
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned int v14; // r10d
  _FX_DRIVER_GLOBALS *v15; // rbp
  char *m_BufferRawVA; // r10
  unsigned __int64 v17; // rdx
  unsigned __int64 QuadPart; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v23; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v25; // rbx
  unsigned __int16 v26; // ax
  const void *v27; // rcx
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int16 v30; // ax
  const void *v31; // rbx
  unsigned __int16 v32; // ax
  const void *v33; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v10 = -1073741808;
LABEL_36:
      FxVerifierDbgBreakPoint(m_Globals);
      return v10;
    }
  }
  p_m_Alignment = (__int64 *)&this->m_Alignment;
  this->m_Length = Length;
  m_Alignment = this->m_Alignment;
  if ( m_Alignment <= 0xFFF
    && ((WdfBindInfo = m_Globals->WdfBindInfo, Major = WdfBindInfo->Version.Major, Major > 1)
     || Major == 1 && WdfBindInfo->Version.Minor >= 0xB) )
  {
    this->m_RawLength = Length;
    v10 = 0;
  }
  else
  {
    v23 = -1LL;
    if ( m_Alignment + Length >= Length )
      v23 = m_Alignment + Length;
    v10 = m_Alignment + Length < Length ? 0xC0000095 : 0;
    this->m_RawLength = v23;
    if ( m_Alignment + Length < Length )
    {
      m_ObjectSize = this->m_ObjectSize;
      v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v25 = 0LL;
      WPP_IFR_SF_qii(m_Globals, 2u, m_Alignment, 0xAu, WPP_FxCommonBuffer_cpp_Traceguids, v25, Length, *p_m_Alignment);
      goto LABEL_36;
    }
  }
  m_RawLength = this->m_RawLength;
  p_m_BufferRawLA = &this->m_BufferRawLA;
  m_DmaEnabler = this->m_DmaEnabler;
  v14 = -1;
  if ( m_RawLength <= 0xFFFFFFFF )
    v14 = this->m_RawLength;
  v15 = m_DmaEnabler->m_Globals;
  this->m_BufferRawVA = 0LL;
  p_m_BufferRawLA->QuadPart = 0LL;
  if ( m_RawLength > 0xFFFFFFFF )
  {
    v26 = m_DmaEnabler->m_ObjectSize;
    v27 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v26 )
      v27 = 0LL;
    WPP_IFR_SF_qi(v15, m_RawLength, m_Alignment, 0x1Cu, WPP_FxDmaEnabler_cpp_Traceguids, v27, m_RawLength);
    FxVerifierDbgBreakPoint(v15);
  }
  else
  {
    LOBYTE(a4) = 1;
    this->m_BufferRawVA = m_DmaEnabler->m_SimplexAdapterInfo.AdapterObject->DmaOperations->AllocateCommonBuffer(
                            m_DmaEnabler->m_SimplexAdapterInfo.AdapterObject,
                            v14,
                            &this->m_BufferRawLA,
                            a4);
  }
  m_BufferRawVA = (char *)this->m_BufferRawVA;
  if ( m_BufferRawVA )
  {
    v17 = *p_m_Alignment;
    QuadPart = p_m_BufferRawLA->QuadPart;
    v19 = ~*p_m_Alignment;
    v20 = v19 & (p_m_BufferRawLA->QuadPart + *p_m_Alignment);
    this->m_BufferAlignedVA = (void *)(v19 & (unsigned __int64)&m_BufferRawVA[*p_m_Alignment]);
    this->m_BufferAlignedLA.QuadPart = v20;
    if ( v17 > 0xFFF )
    {
      if ( v20 < QuadPart )
      {
        v32 = this->m_ObjectSize;
        v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v32 )
          v33 = 0LL;
        WPP_IFR_SF_qxx(m_Globals, v17, v20, QuadPart, traceGuid, v33, QuadPart, v20);
        v10 = -1073741675;
        goto LABEL_36;
      }
      v28 = v20 - QuadPart;
      v29 = 0xFFFFFFFFLL;
      if ( v28 <= 0xFFFFFFFF )
        v29 = (unsigned int)v28;
      v10 = v28 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v28 > 0xFFFFFFFF )
      {
        v30 = this->m_ObjectSize;
        v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v30 )
          v31 = 0LL;
        WPP_IFR_SF_qi(m_Globals, v17, v28, 0xCu, WPP_FxCommonBuffer_cpp_Traceguids, v31, v28);
        goto LABEL_36;
      }
      this->m_BufferAlignedVA = &m_BufferRawVA[v29];
    }
    return v10;
  }
  this->m_Length = 0LL;
  result = 3221225626LL;
  this->m_RawLength = 0LL;
  this->m_BufferAlignedVA = 0LL;
  this->m_BufferAlignedLA.QuadPart = 0LL;
  return result;
}
