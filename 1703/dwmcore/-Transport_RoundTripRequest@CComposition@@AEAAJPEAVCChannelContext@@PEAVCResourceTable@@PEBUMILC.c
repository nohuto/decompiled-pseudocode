/*
 * XREFs of ?Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_ROUNDTRIPREQUEST@@@Z @ 0x18005C424
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     Template_qqx @ 0x18013FC64 (Template_qqx.c)
 */

__int64 __fastcall CComposition::Transport_RoundTripRequest(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_TRANSPORT_ROUNDTRIPREQUEST *a4)
{
  char *v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // eax
  int v8; // ebx
  int v10; // eax
  unsigned int v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF

  v4 = (char *)this + 488;
  v5 = v11;
  v12 = *((unsigned int *)a4 + 1) | 0x100000000uLL;
  v6 = *((_DWORD *)v4 + 6);
  v7 = v6 + 1;
  if ( v6 + 1 >= v6 )
    v5 = v6 + 1;
  v8 = v7 < v6 ? 0x80070216 : 0;
  if ( v7 < v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)v4 + 5) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(v4, 16LL, 1LL, &v12);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)v4 + 16LL * v6) = v12;
    *((_DWORD *)v4 + 6) = v5;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7F3u);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_qqx((_DWORD)v4, v5, DWORD1(v12), v12, SBYTE8(v12));
  }
  return (unsigned int)v8;
}
