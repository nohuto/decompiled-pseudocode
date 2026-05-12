/*
 * XREFs of RaidAdapterTargetedRescan @ 0x1C0029428
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C0012B98 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorVisitUnit @ 0x1C0012FEC (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00134B0 (RaidBusEnumeratorGetLunList.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     McTemplateK0zqqcccqpp @ 0x1C0024664 (McTemplateK0zqqcccqpp.c)
 */

__int64 __fastcall RaidAdapterTargetedRescan(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  _BYTE *v4; // r14
  unsigned int v5; // esi
  unsigned int v6; // r15d
  unsigned int v7; // edi
  unsigned __int8 v10; // r13
  struct _RTL_BITMAP *v11; // rcx
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rbx
  unsigned int v16; // [rsp+60h] [rbp-A0h]
  _QWORD v18[32]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *(_BYTE **)(a1 + 4936);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v10 = v4[8];
  LOBYTE(v16) = v10;
  if ( SLOBYTE(WPP_MAIN_CB.Dpc.DpcData) < 0 )
    McTemplateK0zqqcccqpp(
      a1,
      a2,
      (__int64)a3,
      *(const wchar_t **)(a1 + 48),
      *(_DWORD *)(a1 + 56),
      *(_DWORD *)(a1 + 4924),
      v10,
      v4[9],
      v4[10],
      *(_DWORD *)(a1 + 4928),
      *(_QWORD *)(a1 + 4944),
      *(_QWORD *)(a1 + 4952));
  if ( (*(_DWORD *)(a1 + 4924) & 4) != 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 401);
    if ( *(_QWORD *)(a1 + 4976) )
    {
      v11 = (struct _RTL_BITMAP *)(a1 + 4960);
      if ( (*(_DWORD *)(a1 + 4928) & 1) != 0 )
        RtlSetBit(v11, v10);
      else
        RtlClearBit(v11, v10);
    }
  }
  if ( a4 == 1 )
    return 0LL;
  v13 = *(_DWORD *)(a1 + 4924);
  if ( (v13 & 2) != 0 )
  {
    v5 = (unsigned __int8)v4[9];
    v6 = v5 + 1;
  }
  else if ( (v13 & 1) != 0 )
  {
    *(_WORD *)((char *)&v16 + 1) = *(_WORD *)(v4 + 9);
    HIBYTE(v16) = 0;
    return RaidBusEnumeratorVisitUnit(a3, v16);
  }
  v14 = *(unsigned __int8 *)(a1 + 450);
  memset(v18, 1, 0xFFuLL);
  while ( 1 )
  {
    if ( v5 >= v6 )
      return v7;
    HIBYTE(v16) = 0;
    BYTE1(v16) = v5;
    result = RaidBusEnumeratorGetLunList((__int64)a3, (unsigned __int16)v16, v18);
    v7 = result;
    if ( (int)result < 0 )
      return result;
    v15 = 0LL;
    if ( v14 )
      break;
LABEL_20:
    ++v5;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)v18 + v15) )
    {
      BYTE2(v16) = v15;
      result = RaidBusEnumeratorVisitUnit(a3, v16);
      v7 = result;
      if ( (int)result < 0 )
        return result;
    }
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= v14 )
      goto LABEL_20;
  }
}
