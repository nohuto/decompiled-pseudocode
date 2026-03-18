/*
 * XREFs of ?ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAREDSECTION@@@Z @ 0x180084B80
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSharedSection::ProcessUpdate(CSharedSection *this, struct CResourceTable *a2, __m128i *a3)
{
  __m128i v3; // xmm1

  v3 = *a3;
  *((_DWORD *)this + 16) = a3[1].m128i_i32[0];
  *((_QWORD *)this + 7) = _mm_srli_si128(v3, 8).m128i_u64[0];
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
