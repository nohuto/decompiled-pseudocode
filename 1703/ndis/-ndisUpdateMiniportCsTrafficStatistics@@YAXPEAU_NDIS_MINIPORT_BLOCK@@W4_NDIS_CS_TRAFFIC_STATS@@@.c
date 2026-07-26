/*
 * XREFs of ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0072A90
 * Callers:
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0071100 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0071484 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0072390 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C0072E58 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00EA84C (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00EAA34 (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     Template_qxzzxxxxxx @ 0x1C00733A4 (Template_qxzzxxxxxx.c)
 */

void __fastcall ndisUpdateMiniportCsTrafficStatistics(_QWORD *MiniportAdapterHandle, int a2)
{
  KSPIN_LOCK *v3; // rbx
  KSPIN_LOCK v4; // rdi
  KSPIN_LOCK v5; // rsi
  KSPIN_LOCK v6; // r14
  KSPIN_LOCK v7; // r15
  KSPIN_LOCK v8; // r12
  KSPIN_LOCK v9; // r13
  char *v10; // rdx
  KSPIN_LOCK v11; // r11
  KSPIN_LOCK v12; // r10
  KSPIN_LOCK v13; // r9
  KSPIN_LOCK v14; // r8
  KSPIN_LOCK v15; // rcx
  KSPIN_LOCK v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  const wchar_t *v21; // rcx
  const wchar_t *v22; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp-90h]
  _QWORD v25[6]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v26; // [rsp+A8h] [rbp-58h]
  __int128 v27; // [rsp+B0h] [rbp-50h]
  __int128 v28; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+D0h] [rbp-30h]
  struct _NDIS_OID_REQUEST Request; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v31[20]; // [rsp+1E0h] [rbp+E0h] BYREF

  v26 = MiniportAdapterHandle;
  memset((char *)v31 + 1, 0, 0x97uLL);
  v3 = (KSPIN_LOCK *)MiniportAdapterHandle[561];
  v31[0] = 9961856LL;
  memset(&Request, 0, 0xF8uLL);
  *(_DWORD *)&Request.NdisReserved[16] |= 8u;
  *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqGeneric;
  Request.DATA.QUERY_INFORMATION.InformationBuffer = v31;
  Request.Header = (NDIS_OBJECT_HEADER)15466902;
  Request.DATA.QUERY_INFORMATION.Oid = 131334;
  *(_QWORD *)&Request.RequestType = 2LL;
  Request.DATA.QUERY_INFORMATION.InformationBufferLength = 152;
  if ( !(unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Request, 0, 0LL, 0LL) )
  {
    memset(v25, 0, sizeof(v25));
    v4 = v31[4];
    v5 = v31[8];
    v6 = v31[5];
    v7 = v31[9];
    v8 = v31[6];
    v9 = v31[10];
    *(_QWORD *)&v27 = v31[4];
    *((_QWORD *)&v27 + 1) = v31[8];
    *(_QWORD *)&v28 = v31[5];
    *((_QWORD *)&v28 + 1) = v31[9];
    *(_QWORD *)&v29 = v31[6];
    *((_QWORD *)&v29 + 1) = v31[10];
    NewIrql = KeAcquireSpinLockRaiseToDpc(v3);
    v10 = (char *)&v3[6 * a2 + 108];
    if ( a2 )
    {
      v11 = v3[108];
      if ( v4 >= v11 )
      {
        v12 = v3[109];
        if ( v5 >= v12 )
        {
          v13 = v3[110];
          if ( v6 >= v13 )
          {
            v14 = v3[111];
            if ( v7 >= v14 )
            {
              v15 = v3[112];
              if ( v8 >= v15 )
              {
                v16 = v3[113];
                if ( v9 >= v16 )
                {
                  v4 -= v11;
                  v5 -= v12;
                  v6 -= v13;
                  v7 -= v14;
                  v8 -= v15;
                  v9 -= v16;
                }
              }
            }
          }
        }
      }
      v25[5] = v9;
      v17 = (char *)v25 - v10;
      v25[4] = v8;
      v25[3] = v7;
      v18 = 6LL;
      v25[2] = v6;
      v25[1] = v5;
      v25[0] = v4;
      do
      {
        *(_QWORD *)v10 += *(_QWORD *)&v10[v17];
        v10 += 8;
        --v18;
      }
      while ( v18 );
    }
    else
    {
      v9 = v25[5];
      v8 = v25[4];
      v7 = v25[3];
      v6 = v25[2];
      v5 = v25[1];
      v4 = v25[0];
    }
    v19 = v28;
    *((_OWORD *)v3 + 54) = v27;
    v20 = v29;
    *((_OWORD *)v3 + 55) = v19;
    *((_OWORD *)v3 + 56) = v20;
    KeReleaseSpinLock(v3, NewIrql);
    if ( a2 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    {
      v21 = L"D0";
      v22 = L"DX";
      if ( a2 != 1 )
      {
        v22 = L"D0";
        v21 = L"DX";
      }
      Template_qxzzxxxxxx(
        v21,
        v26,
        v26 + 504,
        *((unsigned int *)v26 + 1020),
        v26[506],
        v21,
        v22,
        v4,
        v5,
        v6,
        v7,
        v8,
        v9);
    }
  }
}
