/*
 * XREFs of NdisCopySendNetBufferListInfo @ 0x1C0027C30
 * Callers:
 *     <none>
 * Callees:
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C001157C (ndisGenerateNetBufferListCorrelationIds.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C00117B8 (NetioCopyOpaqueNetBufferListInformation.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004E2A0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 */

void __stdcall NdisCopySendNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  char v4; // cl
  void **v5; // rdx
  __int64 v6; // r10
  void *v7; // rax
  void **v8; // rcx
  __int64 v9; // r9
  const struct _EVENT_DESCRIPTOR *v10; // rdx
  signed __int64 v11; // r8
  void *v12; // rax
  unsigned __int8 v13; // [rsp+20h] [rbp-19h]
  const struct _GUID *v14; // [rsp+28h] [rbp-11h]
  struct _GUID v15; // [rsp+50h] [rbp+17h]
  struct _GUID v16; // [rsp+60h] [rbp+27h] BYREF
  struct _GUID v17; // [rsp+70h] [rbp+37h] BYREF

  v4 = (__int64)SrcNetBufferList->NetBufferListInfo[7] & 0xF;
  if ( !v4 )
    v4 = *((_BYTE *)SrcNetBufferList->NdisPoolHandle + 32);
  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  v9 = 2LL;
  v11 = (char *)SrcNetBufferList - (char *)DestNetBufferList;
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  v6 = 2LL;
  DestNetBufferList->NetBufferListInfo[2] = SrcNetBufferList->NetBufferListInfo[2];
  v12 = SrcNetBufferList->NetBufferListInfo[23];
  v5 = &DestNetBufferList->NetBufferListInfo[3];
  DestNetBufferList->NetBufferListInfo[23] = v12;
  do
  {
    *v5 = *(void **)((char *)v5 + v11);
    ++v5;
    --v6;
  }
  while ( v6 );
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[5] = SrcNetBufferList->NetBufferListInfo[5];
  v7 = SrcNetBufferList->NetBufferListInfo[8];
  LOBYTE(DestNetBufferList->NetBufferListInfo[7]) = v4;
  v8 = &DestNetBufferList->NetBufferListInfo[11];
  DestNetBufferList->NetBufferListInfo[8] = v7;
  do
  {
    *v8 = *(void **)((char *)v8 + v11);
    ++v8;
    --v9;
  }
  while ( v9 );
  DestNetBufferList->NetBufferListInfo[20] = SrcNetBufferList->NetBufferListInfo[20];
  DestNetBufferList->NetBufferListInfo[24] = SrcNetBufferList->NetBufferListInfo[24];
  DestNetBufferList->NetBufferListInfo[25] = SrcNetBufferList->NetBufferListInfo[25];
  DestNetBufferList->NetBufferListInfo[14] = SrcNetBufferList->NetBufferListInfo[14];
  NetioCopyOpaqueNetBufferListInformation((__int64)DestNetBufferList, (__int64)SrcNetBufferList);
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    ndisGenerateNetBufferListCorrelationIds((__int64)DestNetBufferList, 1u);
    v15 = (struct _GUID)((__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v17 = (struct _GUID)((__int64)DestNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v16 = v15;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFuLL, v10, &v17, &v16, v13, v14, 4u);
  }
}
