/*
 * XREFs of ndisOidPostTaskOffload @ 0x1C0045C20
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidPostOffloadEncapsulation @ 0x1C001D190 (ndisOidPostOffloadEncapsulation.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

void __fastcall ndisOidPostTaskOffload(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(0xEAu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    v5 = *(_QWORD *)(v4 + 792);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 88) == -67042815 )
      {
        ndisOidPostOffloadEncapsulation(a1);
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 792) + 88LL) == -67042815 )
        {
          *(_DWORD *)(v3 + 32) = -67042815;
          *(_QWORD *)(v3 + 40) = *(_QWORD *)(*(_QWORD *)(v4 + 792) + 96LL);
          *(_DWORD *)(v3 + 48) = *(_DWORD *)(*(_QWORD *)(v4 + 792) + 104LL);
          *(_DWORD *)(*(_QWORD *)(v4 + 792) + 88LL) = 0;
          *(_QWORD *)(*(_QWORD *)(v4 + 792) + 96LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v4 + 792) + 104LL) = 0;
        }
        if ( *((_DWORD *)a1 + 10) )
        {
          *(_DWORD *)(v3 + 52) = 0;
          *(_DWORD *)(v3 + 56) = 144;
        }
        else
        {
          *(_QWORD *)(v3 + 52) = *(unsigned int *)(v3 + 48);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v6 = *((_DWORD *)a1 + 10);
    WPP_SF_qqqL(0xEBu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v4, v3, v6);
  }
}
