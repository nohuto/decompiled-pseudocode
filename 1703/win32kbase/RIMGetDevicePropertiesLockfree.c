/*
 * XREFs of RIMGetDevicePropertiesLockfree @ 0x1C01017A0
 * Callers:
 *     NtRIMGetDevicePropertiesLockfree @ 0x1C00FFAA0 (NtRIMGetDevicePropertiesLockfree.c)
 *     RIMGetDeviceProperties @ 0x1C0101670 (RIMGetDeviceProperties.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     RIMGetHMonitor @ 0x1C0107EC8 (RIMGetHMonitor.c)
 */

__int64 __fastcall RIMGetDevicePropertiesLockfree(char *a1, unsigned __int64 a2, char a3)
{
  int v5; // esi
  char *v6; // rdi
  unsigned int v7; // r15d
  __int64 v8; // r12
  CTouchProcessor *v9; // rcx
  _WORD *v10; // r12
  CTouchProcessor *v11; // rcx
  char v12; // al
  int v13; // edx
  CTouchProcessor *v14; // rcx
  CTouchProcessor *v15; // rcx
  CTouchProcessor *v16; // rcx
  CTouchProcessor *v17; // rcx
  CTouchProcessor *v18; // rcx
  __int64 v19; // rax
  CTouchProcessor *v20; // rcx
  CTouchProcessor *v21; // rcx
  CTouchProcessor *v22; // rcx
  CTouchProcessor *v23; // rcx
  CTouchProcessor *v24; // rcx
  PVOID Object; // [rsp+28h] [rbp-60h] BYREF
  SIZE_T Length[2]; // [rsp+30h] [rbp-58h]
  volatile void *Address[2]; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+50h] [rbp-38h]

  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    if ( Object )
      v6 = (char *)Object + 64;
    else
      v6 = 0LL;
    if ( !*((_QWORD *)v6 + 28) )
    {
      v5 = -1073741811;
      goto LABEL_58;
    }
    if ( *(_DWORD *)a2 != 4 )
    {
      v12 = v6[48];
      if ( v12 == 1 )
      {
        v13 = (*((_DWORD *)v6 + 46) >> 13) & 1;
        if ( a3 )
        {
          v14 = (CTouchProcessor *)a2;
          if ( a2 >= (unsigned __int64)W32UserProbeAddress )
            v14 = W32UserProbeAddress;
          *(_DWORD *)v14 = 1;
          v15 = (CTouchProcessor *)(a2 + 4);
          if ( a2 + 4 >= (unsigned __int64)W32UserProbeAddress )
            v15 = W32UserProbeAddress;
          *(_DWORD *)v15 = v13;
          v16 = (CTouchProcessor *)(a2 + 8);
          if ( a2 + 8 >= (unsigned __int64)W32UserProbeAddress )
            v16 = W32UserProbeAddress;
          *(_OWORD *)v16 = *(_OWORD *)(v6 + 456);
          *((_QWORD *)v16 + 2) = *((_QWORD *)v6 + 59);
          *((_DWORD *)v16 + 6) = *((_DWORD *)v6 + 120);
        }
        else
        {
          *(_DWORD *)a2 = 1;
          *(_DWORD *)(a2 + 4) = v13;
          *(_OWORD *)(a2 + 8) = *(_OWORD *)(v6 + 456);
          *(_QWORD *)(a2 + 24) = *((_QWORD *)v6 + 59);
          *(_DWORD *)(a2 + 32) = *((_DWORD *)v6 + 120);
        }
      }
      else if ( v12 )
      {
        if ( v12 == 2 )
        {
          v19 = RIMGetHMonitor(v6);
          if ( a3 )
          {
            v20 = (CTouchProcessor *)a2;
            if ( a2 >= (unsigned __int64)W32UserProbeAddress )
              v20 = W32UserProbeAddress;
            *(_DWORD *)v20 = 3;
            v21 = (CTouchProcessor *)(a2 + 8);
            if ( a2 + 8 >= (unsigned __int64)W32UserProbeAddress )
              v21 = W32UserProbeAddress;
            *(_QWORD *)v21 = v19;
            v22 = (CTouchProcessor *)(a2 + 16);
            if ( a2 + 16 >= (unsigned __int64)W32UserProbeAddress )
              v22 = W32UserProbeAddress;
            *(_WORD *)v22 = *(_WORD *)(*((_QWORD *)v6 + 57) + 110LL);
            v23 = (CTouchProcessor *)(a2 + 18);
            if ( a2 + 18 >= (unsigned __int64)W32UserProbeAddress )
              v23 = W32UserProbeAddress;
            *(_WORD *)v23 = *(_WORD *)(*((_QWORD *)v6 + 57) + 112LL);
            v24 = (CTouchProcessor *)(a2 + 20);
            if ( a2 + 20 >= (unsigned __int64)W32UserProbeAddress )
              v24 = W32UserProbeAddress;
            *(_WORD *)v24 = *(_WORD *)(*((_QWORD *)v6 + 57) + 114LL);
          }
          else
          {
            *(_DWORD *)a2 = 3;
            *(_QWORD *)(a2 + 8) = v19;
            *(_WORD *)(a2 + 16) = *(_WORD *)(*((_QWORD *)v6 + 57) + 110LL);
            *(_WORD *)(a2 + 18) = *(_WORD *)(*((_QWORD *)v6 + 57) + 112LL);
            *(_WORD *)(a2 + 20) = *(_WORD *)(*((_QWORD *)v6 + 57) + 114LL);
          }
        }
      }
      else if ( a3 )
      {
        v17 = (CTouchProcessor *)a2;
        if ( a2 >= (unsigned __int64)W32UserProbeAddress )
          v17 = W32UserProbeAddress;
        *(_DWORD *)v17 = 2;
        v18 = (CTouchProcessor *)(a2 + 8);
        if ( a2 + 8 >= (unsigned __int64)W32UserProbeAddress )
          v18 = W32UserProbeAddress;
        *(_QWORD *)v18 = *((_QWORD *)v6 + 57);
        *((_DWORD *)v18 + 2) = *((_DWORD *)v6 + 116);
      }
      else
      {
        *(_DWORD *)a2 = 2;
        *(_QWORD *)(a2 + 8) = *((_QWORD *)v6 + 57);
        *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 116);
      }
      goto LABEL_58;
    }
    v7 = (*((unsigned __int16 *)v6 + 104) >> 1) + 1;
    if ( a3 )
    {
      v9 = (CTouchProcessor *)a2;
      if ( a2 >= (unsigned __int64)W32UserProbeAddress )
        v9 = W32UserProbeAddress;
      *(_OWORD *)Length = *(_OWORD *)v9;
      *(_OWORD *)Address = *((_OWORD *)v9 + 1);
      v29 = *((_QWORD *)v9 + 4);
      v10 = Address[0];
      if ( !Address[0] )
      {
        v11 = (CTouchProcessor *)(a2 + 8);
        if ( a2 + 8 >= (unsigned __int64)W32UserProbeAddress )
          v11 = W32UserProbeAddress;
        *(_DWORD *)v11 = v7;
        goto LABEL_58;
      }
      if ( LODWORD(Length[1]) >= v7 && v7 > 2 )
      {
        ProbeForWrite(Address[0], LODWORD(Length[1]), 4u);
        memmove(v10, *((const void **)v6 + 27), *((unsigned __int16 *)v6 + 104));
        v10[1] = 92;
        v10[v7 - 1] = 0;
        goto LABEL_58;
      }
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 16);
      if ( !v8 )
      {
        *(_DWORD *)(a2 + 8) = v7;
LABEL_58:
        ObfDereferenceObject(Object);
        return (unsigned int)v5;
      }
      if ( *(_DWORD *)(a2 + 8) >= v7 && v7 > 2 )
      {
        memmove(*(void **)(a2 + 16), *((const void **)v6 + 27), *((unsigned __int16 *)v6 + 104));
        *(_WORD *)(v8 + 2) = 92;
        *(_WORD *)(v8 + 2LL * (v7 - 1)) = 0;
        goto LABEL_58;
      }
    }
    v5 = -1073741811;
    goto LABEL_58;
  }
  return (unsigned int)v5;
}
