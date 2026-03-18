/*
 * XREFs of IopPerfCompleteRequest @ 0x1401FB4C4
 * Callers:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x1407A4DE8 (IovCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     IopFreeIrpExtension @ 0x140117B28 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     IopProcessIoTracking @ 0x1401FB984 (IopProcessIoTracking.c)
 */

void __fastcall IopPerfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  char v4; // cl
  char v5; // dl
  __int64 v6; // r14
  unsigned __int8 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  signed __int32 v11; // esi
  bool v12; // sf
  char v13; // al
  ULONG_PTR v14; // [rsp+30h] [rbp-39h] BYREF
  signed __int32 v15; // [rsp+38h] [rbp-31h]
  unsigned __int8 *v16; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h]
  __int64 v18; // [rsp+50h] [rbp-19h]
  signed __int32 v19; // [rsp+58h] [rbp-11h]
  unsigned __int8 v20; // [rsp+5Ch] [rbp-Dh]
  _QWORD v21[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v22; // [rsp+70h] [rbp+7h]
  _QWORD *v23; // [rsp+78h] [rbp+Fh] BYREF
  int v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+84h] [rbp+1Bh]
  ULONG_PTR *v26; // [rsp+88h] [rbp+1Fh] BYREF
  int v27; // [rsp+90h] [rbp+27h]
  int v28; // [rsp+94h] [rbp+2Bh]

  if ( *(_WORD *)BugCheckParameter1 == 6 )
  {
    v4 = *(_BYTE *)(BugCheckParameter1 + 66);
    v5 = *(_BYTE *)(BugCheckParameter1 + 67);
    if ( v5 <= (char)(v4 + 1) )
    {
      v6 = 0LL;
      v7 = 0LL;
      if ( v5 <= v4 )
      {
        v7 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
        if ( *((_QWORD *)v7 + 5) )
        {
          if ( (IopPerfStatus & 2) != 0
            && IopIrpHasExtensionType(BugCheckParameter1, 1u)
            && !IopIrpHasExtensionType(v8, 4u) )
          {
            IopProcessIoTracking(
              MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 40LL),
              *(unsigned int *)(*((_QWORD *)v7 + 5) + 72LL));
            LOBYTE(v9) = 1;
            IopFreeIrpExtension(BugCheckParameter1, 1, v9);
          }
          v10 = *(_QWORD *)(*((_QWORD *)v7 + 5) + 8LL);
          if ( v10 && *v7 <= 0x1Bu )
            v6 = *(_QWORD *)(v10 + 8LL * *v7 + 112);
        }
        else
        {
          v6 = *((_QWORD *)v7 + 7);
        }
      }
      if ( (IopPerfStatus & 1) != 0 )
      {
        v25 = 0;
        v21[0] = v6;
        v21[1] = BugCheckParameter1;
        v11 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
        v22 = v11;
        v23 = v21;
        v24 = 20;
        EtwTraceKernelEvent((__int64)&v23, 1u, 0x20000010u, 0x134u, 0x401802u);
        if ( !v7 )
        {
LABEL_19:
          IopfCompleteRequest(BugCheckParameter1, a2);
          v28 = 0;
          v26 = &v14;
          v14 = BugCheckParameter1;
          v15 = v11;
          v27 = 12;
          EtwTraceKernelEvent((__int64)&v26, 1u, 0x20000010u, 0x135u, 0x401802u);
          return;
        }
        v18 = 0LL;
        v12 = *(int *)(BugCheckParameter1 + 48) < 0;
        v17 = *((_QWORD *)v7 + 8);
        v16 = v7;
        v19 = v11;
        v20 = v7[3];
        v13 = v7[3];
        if ( v12 )
        {
          if ( v13 < 0 )
            goto LABEL_17;
        }
        else if ( (v13 & 0x40) != 0 )
        {
          goto LABEL_17;
        }
        if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v13 & 0x20) == 0 )
        {
          v7[3] = v13 | 0xC0;
          goto LABEL_18;
        }
LABEL_17:
        v18 = *((_QWORD *)v7 + 7);
        v17 = *((_QWORD *)v7 + 8);
LABEL_18:
        *((_QWORD *)v7 + 7) = IopPerfCompletionRoutine;
        *((_QWORD *)v7 + 8) = &v16;
        goto LABEL_19;
      }
    }
  }
  IopfCompleteRequest(BugCheckParameter1, a2);
}
