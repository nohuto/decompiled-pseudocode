/*
 * XREFs of PsspCaptureThreadInformation @ 0x18005C79C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x18005C280 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspDumpThread @ 0x18005CAA4 (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x18005CCA8 (PsspFreeLinkedHandleList.c)
 *     RtlGetExtendedContextLength @ 0x1800724A0 (RtlGetExtendedContextLength.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A1EB0 (ZwGetNextThread.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 **v6; // r15
  __int64 *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  int NextThread; // edi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // esi
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // r12d
  __int64 **v18; // r14
  unsigned int i; // r12d
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v23; // rax
  int ExtendedContextLength; // eax
  int v25; // [rsp+28h] [rbp-69h]
  __int64 v26; // [rsp+58h] [rbp-39h] BYREF
  __int64 v27; // [rsp+60h] [rbp-31h] BYREF
  __int64 *v28; // [rsp+68h] [rbp-29h] BYREF
  __int64 v29; // [rsp+70h] [rbp-21h] BYREF
  __int64 v30; // [rsp+78h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-11h] BYREF
  int v32; // [rsp+88h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp-1h] BYREF
  int v34; // [rsp+98h] [rbp+7h]
  __int64 v35; // [rsp+9Ch] [rbp+Bh]
  _QWORD v36[8]; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v32 = a3 & 0x100;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (a3 >> 7) & 8 | (v32 != 0 ? 72 : 64);
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v8, 0LL, 0, &v29);
  if ( NextThread != -2147483622 )
  {
    v11 = 1LL;
    do
    {
      v12 = v29;
      v27 = v29;
      if ( NextThread < 0 )
        goto LABEL_34;
      if ( !v7 || *((_WORD *)v7 + 5) >= *((_WORD *)v7 + 4) )
      {
        v26 = 1LL;
        v28 = 0LL;
        NextThread = ZwAllocateVirtualMemory(-1LL, &v28, 0LL, &v26, 4096, 4);
        if ( NextThread < 0 )
          goto LABEL_34;
        if ( v6 )
        {
          *v7 = (__int64)v28;
          v7 = v28;
        }
        else
        {
          v7 = v28;
          v6 = (__int64 **)v28;
        }
        LODWORD(v11) = 1;
        v23 = v26 - 16;
        *((_WORD *)v7 + 5) = 0;
        *((_WORD *)v7 + 4) = v23 >> 2;
        v12 = v29;
      }
      v9 += v11;
      *((_DWORD *)v7 + *((unsigned __int16 *)v7 + 5) + 3) = v12;
      *((_WORD *)v7 + 5) += v11;
      NextThread = ZwGetNextThread(a2, v27, v8, 0LL, 0, &v29);
      v11 = 1LL;
    }
    while ( NextThread != -2147483622 );
    if ( !v9 )
      return 0LL;
    v13 = 0;
    LODWORD(v27) = 0;
    if ( v32 )
    {
      if ( (a3 & 0x200) == 0
        || (ExtendedContextLength = RtlGetExtendedContextLength(a4, &v27), v13 = v27, ExtendedContextLength < 0) )
      {
        v13 = 1232;
      }
    }
    *(_DWORD *)(a1 + 1024) = v13;
    v11 = 0xFFFFFFFFLL;
    v14 = v9 * (unsigned __int64)(((v13 + 15) & 0xFFFFFFF0) + 128);
    if ( v14 > 0xFFFFFFFF )
    {
      NextThread = -1073741675;
    }
    else
    {
      v36[0] = (unsigned int)v14;
      NextThread = NtCreateSection(&Handle, 983047LL, &unk_1801185E8, v36, 4, 0x8000000, 0LL);
      if ( NextThread >= 0 )
      {
        v30 = 0LL;
        v26 = 0LL;
        NextThread = ZwMapViewOfSection(Handle, -1LL, &v30, 0LL, 0LL, 0LL, &v26, 1, 0, 4);
        if ( NextThread >= 0 )
        {
          v16 = v30;
          v17 = 0;
          v18 = v6;
          v33 = v30;
          v34 = v26;
          v35 = 0LL;
          if ( v6 )
          {
            do
            {
              for ( i = 0; i < *((unsigned __int16 *)v18 + 5); ++i )
              {
                v29 = *((unsigned int *)v18 + i + 3);
                v20 = PsspDumpThread((unsigned int)&v33, a3, a4, v13, v25, v29);
                NextThread = v20;
                if ( v20 == -1073741789 )
                  break;
                if ( v20 < 0 )
                {
                  NtUnmapViewOfSection(-1LL, v30, v15);
                  goto LABEL_33;
                }
              }
              if ( NextThread < 0 )
                break;
              v18 = (__int64 **)*v18;
            }
            while ( v18 );
            v16 = v30;
            v17 = HIDWORD(v35);
            v4 = v35;
          }
          NtUnmapViewOfSection(-1LL, v16, v15);
          PsspFreeLinkedHandleList(v6, v21);
          *(_QWORD *)(a1 + 1000) = v4;
          *(_QWORD *)(a1 + 1008) = Handle;
          *(_DWORD *)(a1 + 992) = v17;
          *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
          return 0LL;
        }
LABEL_33:
        NtClose(Handle);
      }
    }
LABEL_34:
    PsspFreeLinkedHandleList(v6, v11);
    return (unsigned int)NextThread;
  }
  return 0LL;
}
