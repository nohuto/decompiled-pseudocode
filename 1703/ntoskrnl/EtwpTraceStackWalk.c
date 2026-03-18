/*
 * XREFs of EtwpTraceStackWalk @ 0x140256F38
 * Callers:
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     EtwpStackTraceDispatcher @ 0x140256CE0 (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkApc @ 0x140256E30 (EtwpStackWalkApc.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x1400E7800 (KeQueryCurrentStackInformation.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x140181EE0 (KeGetCurrentStackPointer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     EtwpGetStackLookasideListEntry @ 0x140256B28 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 *     PsPicoWalkUserStack @ 0x1406E34F0 (PsPicoWalkUserStack.c)
 */

void __fastcall EtwpTraceStackWalk(int a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  int v6; // ecx
  int v7; // r12d
  PSLIST_ENTRY StackLookasideListEntry; // rdi
  void *v9; // rsp
  __int64 v10; // rbx
  ULONG v11; // r15d
  unsigned int v12; // r14d
  ULONG v13; // r8d
  ULONG v14; // ebx
  PVOID *v15; // rcx
  unsigned int v16; // r14d
  ULONG v17; // r15d
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned __int16 v20; // ax
  char v21; // [rsp+10h] [rbp-600h] BYREF
  unsigned int v22; // [rsp+610h] [rbp+0h] BYREF
  unsigned __int64 v23; // [rsp+618h] [rbp+8h] BYREF
  __int64 v24; // [rsp+620h] [rbp+10h]
  __int64 *v25; // [rsp+628h] [rbp+18h]
  __int64 v26; // [rsp+630h] [rbp+20h] BYREF
  int v27; // [rsp+638h] [rbp+28h]
  int v28; // [rsp+63Ch] [rbp+2Ch]
  unsigned __int64 v29; // [rsp+648h] [rbp+38h] BYREF
  __int64 *v30; // [rsp+650h] [rbp+40h] BYREF
  int v31; // [rsp+658h] [rbp+48h]
  int v32; // [rsp+65Ch] [rbp+4Ch]
  PSLIST_ENTRY v33; // [rsp+660h] [rbp+50h]
  int v34; // [rsp+668h] [rbp+58h]
  int v35; // [rsp+66Ch] [rbp+5Ch]

  v24 = a3;
  v25 = a4;
  if ( KeQueryCurrentStackInformation(&v22, &v23, &v29) )
  {
    if ( v22 > 7 || (v6 = 161, !_bittest(&v6, v22)) )
    {
      v7 = 256;
      StackLookasideListEntry = EtwpGetStackLookasideListEntry();
      if ( !StackLookasideListEntry )
      {
        if ( (unsigned __int64)&KeGetCurrentStackPointer()[-v23] <= 0x1438 )
          return;
        v9 = alloca(1536LL);
        StackLookasideListEntry = (PSLIST_ENTRY)&v21;
        v7 = 192;
      }
      v10 = 0LL;
      v11 = 0;
      if ( (a2 & 0x800) != 0 )
      {
        v12 = (a2 >> 20) & 0xF;
        v13 = v12 << 8;
        if ( (a2 & 0x2000000) != 0 )
          v13 |= 2u;
        v14 = RtlWalkFrameChain((PVOID *)&StackLookasideListEntry->Next, v12 + v7, v13);
        if ( v14 > v12 )
          v10 = v14 - v12;
        else
          v10 = 0LL;
      }
      if ( (a2 & 0x1000) != 0 )
      {
        v15 = (PVOID *)(&StackLookasideListEntry->Next + v10);
        if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[9] )
        {
          v11 = PsPicoWalkUserStack(v15, (unsigned int)(v7 - v10));
        }
        else
        {
          v16 = HIWORD(a2) & 0xF;
          v17 = RtlWalkFrameChain(v15, v7 + v16 - v10, (v16 << 8) | 1);
          if ( v17 > v16 )
            v11 = v17 - v16;
          else
            v11 = 0;
        }
      }
      v18 = v11 + v10;
      if ( v11 + (_DWORD)v10 )
      {
        v32 = 0;
        v19 = a2 & 0xFFFFE600 | 2;
        v31 = 16;
        v27 = *(_DWORD *)(v24 + 1592);
        v28 = *(_DWORD *)(v24 + 1600);
        v26 = *v25;
        v30 = &v26;
        if ( (a1 & 0x1000000) == 0 || v18 < 4 )
          goto LABEL_25;
        v20 = 6181;
        if ( !(_DWORD)v10 )
          v20 = 6182;
        if ( !(unsigned __int8)EtwpTraceStackKey(
                                 (unsigned __int16)a1,
                                 v19,
                                 v20,
                                 (unsigned int)&v30,
                                 (__int64)StackLookasideListEntry,
                                 v11 + (unsigned int)v10) )
        {
LABEL_25:
          v35 = 0;
          v34 = 8 * v18;
          v33 = StackLookasideListEntry;
          EtwpLogKernelEvent((__int64)&v30, EtwpHostSiloState, (unsigned __int16)a1, 2u, 0x1820u, v19);
        }
      }
      if ( v7 == 256 )
        RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, StackLookasideListEntry - 1);
    }
  }
}
