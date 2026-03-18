/*
 * XREFs of DxgkQueryProtectedSessionInfoFromNtHandle @ 0x1C01BCFF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionInfoFromNtHandle(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  ULONG64 v6; // rax
  HANDLE v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  _QWORD *v14; // rax
  HANDLE v15; // rsi
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PVOID v20; // r15
  __int64 v21; // rax
  __int64 v22; // rsi
  const void *v23; // rdx
  char *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rsi
  const void *v27; // rdx
  char *v28; // rcx
  _DWORD *v29; // rdx
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  __int64 v31; // [rsp+40h] [rbp-68h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-60h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-58h]
  __int128 v34; // [rsp+60h] [rbp-48h]
  __int64 v35; // [rsp+70h] [rbp-38h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 530LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2151);
  v6 = a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v6;
  v34 = *(_OWORD *)(v6 + 16);
  v35 = *(_QWORD *)(v6 + 32);
  v7 = Handle[1];
  if ( Handle[1] )
  {
    if ( (_DWORD)v34 )
    {
LABEL_19:
      v31 = *((_QWORD *)&v34 + 1);
      if ( *((_QWORD *)&v34 + 1) )
      {
        if ( (_DWORD)v35 )
          goto LABEL_25;
      }
      else if ( !(_DWORD)v35 )
      {
LABEL_25:
        v15 = Handle[0];
        v16 = ObReferenceObjectByHandle(
                Handle[0],
                0x20000u,
                g_pDxgkSharedProtectedSessionObjectType,
                1,
                &Object,
                &HandleInformation);
        v9 = v16;
        if ( v16 == -1073741788 )
        {
          v8 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
          v8[3] = v15;
          LODWORD(v9) = -1073741788;
          v8[4] = -1073741788LL;
          goto LABEL_13;
        }
        if ( v16 >= 0 )
        {
          v20 = Object;
          if ( !*(_QWORD *)Object )
          {
            v21 = WdLogNewEntry5_WdAssertion(v18);
            *(_QWORD *)(v21 + 24) = 608LL;
            WdLogEvent5_WdAssertion(v21);
          }
          v22 = *(unsigned int *)(*(_QWORD *)v20 + 88LL);
          if ( (unsigned int)v34 >= (unsigned int)v22 )
          {
            v23 = *(const void **)(*(_QWORD *)v20 + 80LL);
            v24 = *(char **)(a1 + 8);
            if ( (unsigned __int64)&v24[v22] > MmUserProbeAddress || &v24[v22] <= v24 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v24, v23, (unsigned int)v22);
          }
          v25 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v25 = (_DWORD *)MmUserProbeAddress;
          *v25 = v22;
          if ( v7 && (unsigned int)v34 < (unsigned int)v22 )
            LODWORD(v9) = -1073741789;
          v26 = *(unsigned int *)(*(_QWORD *)v20 + 104LL);
          if ( (unsigned int)v35 >= (unsigned int)v26 )
          {
            v27 = *(const void **)(*(_QWORD *)v20 + 96LL);
            v28 = *(char **)(a1 + 24);
            if ( (unsigned __int64)&v28[v26] > MmUserProbeAddress || &v28[v26] <= v28 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v28, v27, (unsigned int)v26);
          }
          v29 = (_DWORD *)(a1 + 32);
          if ( a1 + 32 >= MmUserProbeAddress )
            v29 = (_DWORD *)MmUserProbeAddress;
          *v29 = v26;
          if ( v31 && (unsigned int)v35 < (unsigned int)v26 )
            LODWORD(v9) = -1073741789;
          ObfDereferenceObject(v20);
          goto LABEL_14;
        }
        v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v14[3] = v15;
        v14[4] = v9;
LABEL_24:
        WdLogEvent5_WdWarning(v14);
        v12 = (qword_1C005F010 & 2) == 0;
        goto LABEL_15;
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
      v14[3] = *((_QWORD *)&v34 + 1);
      v14[4] = (unsigned int)v35;
      LODWORD(v9) = -1073741811;
      v14[5] = -1073741811LL;
      goto LABEL_24;
    }
  }
  else if ( !(_DWORD)v34 )
  {
    goto LABEL_19;
  }
  v8 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v4);
  v8[3] = Handle[1];
  v8[4] = (unsigned int)v34;
  LODWORD(v9) = -1073741811;
  v8[5] = -1073741811LL;
LABEL_13:
  WdLogEvent5_WdWarning(v8);
LABEL_14:
  v11 = qword_1C005F010;
  v12 = (qword_1C005F010 & 2) == 0;
LABEL_15:
  if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v10, 2151);
  return (unsigned int)v9;
}
