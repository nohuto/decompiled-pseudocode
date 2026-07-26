/*
 * XREFs of ?NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00241B8
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C001201C (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingGreTaskHardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  const GUID *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v5; // ecx
  char v6; // al
  char v7; // [rsp+30h] [rbp-49h] BYREF
  char v8; // [rsp+31h] [rbp-48h] BYREF
  char v9; // [rsp+32h] [rbp-47h] BYREF
  char v10; // [rsp+33h] [rbp-46h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  char *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  char *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  char *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  char *v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]
  int *v23; // [rsp+B0h] [rbp+37h]
  __int64 v24; // [rsp+B8h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v5 = *(_DWORD *)(v3 + 148);
      v13 = v4 + 4032;
      LOBYTE(v2) = 15;
      v6 = *(_BYTE *)(v3 + 148) & 0xF;
      v14 = 16LL;
      v7 = v6;
      v15 = &v7;
      v16 = 1LL;
      v8 = (v5 >> 4) & 0xF;
      v17 = &v8;
      v9 = BYTE1(v5) & 0xF;
      v18 = 1LL;
      v19 = &v9;
      v21 = &v10;
      v11 = *(_DWORD *)(v3 + 152);
      v23 = &v11;
      v20 = 1LL;
      v10 = BYTE2(v5) & 0xF;
      v22 = 1LL;
      v24 = 4LL;
      TlgWrite(&hProvider, &unk_1C0085423, v2, (LPCGUID)v3, 8u, &pData);
    }
  }
}
