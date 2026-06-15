/*
 * XREFs of ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14005D970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x140046864 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x140046890 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x1400468D8 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140053970 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     WPP_SF_SD @ 0x140054E84 (WPP_SF_SD.c)
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058CA4 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AC28 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x14005D6A0 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::SetEventHandle(
        CSpatialCrossProcessClientEndpoint *this,
        void *a2)
{
  int v4; // ebp
  void **v5; // rdi
  int v6; // ebx
  void **v7; // rax
  unsigned __int16 *Buffer; // rax
  __int64 v9; // rdx
  const wchar_t *v10; // rax
  __int64 v11; // rcx

  v4 = 0;
  v5 = 0LL;
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::SetEventHandle", 51);
  if ( (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this) & 0x20) != 0 || *((_BYTE *)this + 960) )
  {
    v6 = -2147418113;
LABEL_26:
    if ( v6 == -2147023537 )
    {
      v6 = -2004287484;
    }
    else if ( v6 >= 0 && v4 < 0 )
    {
      v6 = v4;
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::SetEventHandle", 102, v4);
    }
    goto LABEL_32;
  }
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v6 = -2147024809;
    goto LABEL_34;
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 20) - 16LL) )
  {
    v6 = -2147418113;
    goto LABEL_34;
  }
  v7 = (void **)operator new(0x10uLL);
  v5 = v7;
  if ( v7 )
  {
    v7[1] = 0LL;
    *v7 = &HandleSendReceiveClient::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    Buffer = (unsigned __int16 *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)this + 20);
    v6 = HandleSendReceiveClient::Initialize(v5, Buffer);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v10 = (const wchar_t *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)this + 20);
      WPP_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_ec6ffd64c46c340de1d2df86dc2f612a_Traceguids, v10, v6);
    }
    if ( v6 >= 0 )
    {
      v6 = HandleSendReceiveClient::SendHandle((__int64)v5, v9, a2);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_ec6ffd64c46c340de1d2df86dc2f612a_Traceguids,
          v6);
      }
      if ( v6 == -2147023537 )
        v6 = -2004287484;
      if ( v6 >= 0 )
        *((_BYTE *)this + 960) = 1;
      v4 = HandleSendReceiveClient::CloseConnection((HandleSendReceiveClient *)v5);
    }
    goto LABEL_26;
  }
  v6 = -2147024882;
LABEL_32:
  if ( v5 )
    HandleSendReceiveClient::`vector deleting destructor'((HandleSendReceiveClient *)v5, 1);
LABEL_34:
  v11 = *((_QWORD *)this + 110);
  if ( v11 )
    memset((void *)(v11 + 380), 0, 0x80uLL);
  return (unsigned int)v6;
}
