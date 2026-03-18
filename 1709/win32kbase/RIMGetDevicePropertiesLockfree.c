/*
 * XREFs of RIMGetDevicePropertiesLockfree @ 0x1C0101F40
 * Callers:
 *     NtRIMGetDevicePropertiesLockfree @ 0x1C00FFFF0 (NtRIMGetDevicePropertiesLockfree.c)
 *     RIMGetDeviceProperties @ 0x1C0101E10 (RIMGetDeviceProperties.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     RIMGetHMonitor @ 0x1C0106078 (RIMGetHMonitor.c)
 */

__int64 __fastcall RIMGetDevicePropertiesLockfree(char *a1, ULONG64 a2, char a3)
{
  int v5; // r14d
  char *v6; // rdi
  int v7; // r15d
  ULONG64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // r12
  _WORD *v11; // r12
  _DWORD *v12; // rdx
  char v13; // al
  int v14; // r8d
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  ULONG64 v17; // rdx
  _DWORD *v18; // rcx
  ULONG64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // edx
  _DWORD *v23; // rcx
  _QWORD *v24; // rcx
  _DWORD *v25; // rcx
  _WORD *v26; // rcx
  _WORD *v27; // rcx
  _WORD *v28; // rcx
  PVOID Object[12]; // [rsp+28h] [rbp-60h] BYREF

  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, Object);
  if ( v5 >= 0 )
  {
    if ( Object[0] )
      v6 = (char *)Object[0] + 64;
    else
      v6 = 0LL;
    if ( !*((_QWORD *)v6 + 28) )
    {
      v5 = -1073741811;
      goto LABEL_65;
    }
    memset(&Object[1], 0, 0x28uLL);
    if ( a3 )
    {
      v8 = a2;
      if ( a2 >= MmUserProbeAddress )
        v8 = MmUserProbeAddress;
      *(_OWORD *)&Object[1] = *(_OWORD *)v8;
      *(_OWORD *)&Object[3] = *(_OWORD *)(v8 + 16);
      Object[5] = *(PVOID *)(v8 + 32);
      v7 = (int)Object[1];
    }
    else
    {
      v7 = *(_DWORD *)a2;
    }
    if ( v7 != 4 )
    {
      v13 = v6[48];
      if ( v13 == 1 )
      {
        v14 = (*((_DWORD *)v6 + 46) >> 13) & 1;
        if ( a3 )
        {
          v15 = (_DWORD *)a2;
          if ( a2 >= MmUserProbeAddress )
            v15 = (_DWORD *)MmUserProbeAddress;
          *v15 = 1;
          v16 = (_DWORD *)(a2 + 4);
          if ( a2 + 4 >= MmUserProbeAddress )
            v16 = (_DWORD *)MmUserProbeAddress;
          *v16 = v14;
          v17 = a2 + 8;
          if ( a2 + 8 >= MmUserProbeAddress )
            v17 = MmUserProbeAddress;
          *(_OWORD *)v17 = *(_OWORD *)(v6 + 456);
          *(_QWORD *)(v17 + 16) = *((_QWORD *)v6 + 59);
          *(_DWORD *)(v17 + 24) = *((_DWORD *)v6 + 120);
        }
        else
        {
          *(_DWORD *)a2 = 1;
          *(_DWORD *)(a2 + 4) = v14;
          *(_OWORD *)(a2 + 8) = *(_OWORD *)(v6 + 456);
          *(_QWORD *)(a2 + 24) = *((_QWORD *)v6 + 59);
          *(_DWORD *)(a2 + 32) = *((_DWORD *)v6 + 120);
        }
      }
      else if ( v13 )
      {
        if ( v13 == 2 )
        {
          v20 = RIMGetHMonitor(v6);
          v21 = *((_QWORD *)v6 + 98);
          if ( v21 )
            v22 = *(_DWORD *)(*(_QWORD *)(v21 + 40) + 60LL);
          else
            v22 = 0;
          if ( a3 )
          {
            v23 = (_DWORD *)a2;
            if ( a2 >= MmUserProbeAddress )
              v23 = (_DWORD *)MmUserProbeAddress;
            *v23 = 3;
            v24 = (_QWORD *)(a2 + 8);
            if ( a2 + 8 >= MmUserProbeAddress )
              v24 = (_QWORD *)MmUserProbeAddress;
            *v24 = v20;
            v25 = (_DWORD *)(a2 + 16);
            if ( a2 + 16 >= MmUserProbeAddress )
              v25 = (_DWORD *)MmUserProbeAddress;
            *v25 = v22;
            v26 = (_WORD *)(a2 + 20);
            if ( a2 + 20 >= MmUserProbeAddress )
              v26 = (_WORD *)MmUserProbeAddress;
            *v26 = *(_WORD *)(*((_QWORD *)v6 + 57) + 110LL);
            v27 = (_WORD *)(a2 + 22);
            if ( a2 + 22 >= MmUserProbeAddress )
              v27 = (_WORD *)MmUserProbeAddress;
            *v27 = *(_WORD *)(*((_QWORD *)v6 + 57) + 112LL);
            v28 = (_WORD *)(a2 + 24);
            if ( a2 + 24 >= MmUserProbeAddress )
              v28 = (_WORD *)MmUserProbeAddress;
            *v28 = *(_WORD *)(*((_QWORD *)v6 + 57) + 114LL);
          }
          else
          {
            *(_DWORD *)a2 = 3;
            *(_QWORD *)(a2 + 8) = v20;
            *(_DWORD *)(a2 + 16) = v22;
            *(_WORD *)(a2 + 20) = *(_WORD *)(*((_QWORD *)v6 + 57) + 110LL);
            *(_WORD *)(a2 + 22) = *(_WORD *)(*((_QWORD *)v6 + 57) + 112LL);
            *(_WORD *)(a2 + 24) = *(_WORD *)(*((_QWORD *)v6 + 57) + 114LL);
          }
        }
      }
      else if ( a3 )
      {
        v18 = (_DWORD *)a2;
        if ( a2 >= MmUserProbeAddress )
          v18 = (_DWORD *)MmUserProbeAddress;
        *v18 = 2;
        v19 = a2 + 8;
        if ( a2 + 8 >= MmUserProbeAddress )
          v19 = MmUserProbeAddress;
        *(_QWORD *)v19 = *((_QWORD *)v6 + 57);
        *(_DWORD *)(v19 + 8) = *((_DWORD *)v6 + 116);
      }
      else
      {
        *(_DWORD *)a2 = 2;
        *(_QWORD *)(a2 + 8) = *((_QWORD *)v6 + 57);
        *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 116);
      }
      goto LABEL_65;
    }
    v9 = (*((unsigned __int16 *)v6 + 104) >> 1) + 1;
    if ( a3 )
    {
      v11 = Object[3];
      if ( !Object[3] )
      {
        v12 = (_DWORD *)(a2 + 8);
        if ( a2 + 8 >= MmUserProbeAddress )
          v12 = (_DWORD *)MmUserProbeAddress;
        *v12 = v9;
        goto LABEL_65;
      }
      if ( LODWORD(Object[2]) >= v9 && v9 > 2 )
      {
        ProbeForWrite(Object[3], LODWORD(Object[2]), 4u);
        memmove(v11, *((const void **)v6 + 27), *((unsigned __int16 *)v6 + 104));
        v11[1] = 92;
        v11[v9 - 1] = 0;
        goto LABEL_65;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a2 + 16);
      if ( !v10 )
      {
        *(_DWORD *)(a2 + 8) = v9;
LABEL_65:
        ObfDereferenceObject(Object[0]);
        return (unsigned int)v5;
      }
      if ( *(_DWORD *)(a2 + 8) >= v9 && v9 > 2 )
      {
        memmove(*(void **)(a2 + 16), *((const void **)v6 + 27), *((unsigned __int16 *)v6 + 104));
        *(_WORD *)(v10 + 2) = 92;
        *(_WORD *)(v10 + 2LL * (v9 - 1)) = 0;
        goto LABEL_65;
      }
    }
    v5 = -1073741811;
    goto LABEL_65;
  }
  return (unsigned int)v5;
}
