/*
 * XREFs of NdisCopySendNetBufferListInfo @ 0x1C004D650
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004CD80 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C004DB4C (NetioCopyOpaqueNetBufferListInformation.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DE20 (ndisGenerateNetBufferListCorrelationIds.c)
 */

void __stdcall NdisCopySendNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  char v4; // cl
  __int64 v5; // r9
  signed __int64 v6; // r8
  __int64 v7; // r10
  void *v8; // rax
  void **v9; // rdx
  void *v10; // rax
  void **v11; // rcx
  const struct _EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int8 v13; // [rsp+20h] [rbp-19h]
  const struct _GUID *v14; // [rsp+28h] [rbp-11h]
  struct _GUID v15; // [rsp+50h] [rbp+17h]
  struct _GUID v16; // [rsp+60h] [rbp+27h] BYREF
  struct _GUID v17; // [rsp+70h] [rbp+37h] BYREF

  v4 = (__int64)SrcNetBufferList->NetBufferListInfo[7] & 0xF;
  if ( !v4 )
    v4 = *((_BYTE *)SrcNetBufferList->NdisPoolHandle + 32);
  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  v5 = 2LL;
  v6 = (char *)SrcNetBufferList - (char *)DestNetBufferList;
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  v7 = 2LL;
  DestNetBufferList->NetBufferListInfo[2] = SrcNetBufferList->NetBufferListInfo[2];
  v8 = SrcNetBufferList->NetBufferListInfo[23];
  v9 = &DestNetBufferList->NetBufferListInfo[3];
  DestNetBufferList->NetBufferListInfo[23] = v8;
  do
  {
    *v9 = *(void **)((char *)v9 + v6);
    ++v9;
    --v7;
  }
  while ( v7 );
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[5] = SrcNetBufferList->NetBufferListInfo[5];
  v10 = SrcNetBufferList->NetBufferListInfo[8];
  LOBYTE(DestNetBufferList->NetBufferListInfo[7]) = v4;
  v11 = &DestNetBufferList->NetBufferListInfo[11];
  DestNetBufferList->NetBufferListInfo[8] = v10;
  do
  {
    *v11 = *(void **)((char *)v11 + v6);
    ++v11;
    --v5;
  }
  while ( v5 );
  DestNetBufferList->NetBufferListInfo[20] = SrcNetBufferList->NetBufferListInfo[20];
  DestNetBufferList->NetBufferListInfo[24] = SrcNetBufferList->NetBufferListInfo[24];
  DestNetBufferList->NetBufferListInfo[25] = SrcNetBufferList->NetBufferListInfo[25];
  DestNetBufferList->NetBufferListInfo[14] = SrcNetBufferList->NetBufferListInfo[14];
  if ( (SrcNetBufferList->NblFlags & 0x10000) != 0 )
    DestNetBufferList->NblFlags |= 0x10000u;
  NetioCopyOpaqueNetBufferListInformation(DestNetBufferList, SrcNetBufferList);
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisGenerateNetBufferListCorrelationIds(DestNetBufferList, 1LL);
    v15 = (struct _GUID)((__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v17 = (struct _GUID)((__int64)DestNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v16 = v15;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v12, &v17, &v16, v13, v14, 4u);
  }
}
