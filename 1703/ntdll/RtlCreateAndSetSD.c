/*
 * XREFs of RtlCreateAndSetSD @ 0x180075B60
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800D8FB0 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180046440 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800464A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180047C00 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x18004A330 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAce @ 0x18004BAF0 (RtlAddAce.c)
 *     RtlCopySid @ 0x18004C1E0 (RtlCopySid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x180075E40 (RtlSetSaclSecurityDescriptor.c)
 */

__int64 __fastcall RtlCreateAndSetSD(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int Acl; // ebx
  unsigned int v6; // r12d
  unsigned __int64 v7; // r14
  unsigned int v8; // r9d
  void *ProcessHeap; // r13
  unsigned int v10; // esi
  unsigned int v11; // r15d
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 Heap; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rbp
  unsigned int v18; // r15d
  unsigned __int8 ***v19; // rsi
  __int64 v20; // r12
  unsigned __int8 *v21; // r8
  unsigned int v22; // ebp
  int v23; // edx
  char v24; // al
  char v25; // cl
  __int64 v26; // rdx
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]

  Acl = 0;
  v28 = 0LL;
  v6 = 0;
  v29 = 0LL;
  v7 = 0LL;
  v8 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v10 = 8;
  v11 = 8;
  if ( !a2 )
  {
LABEL_9:
    v14 = 40;
    if ( v10 != 8 )
    {
      if ( v10 + 40 < 0x28 )
        return (unsigned int)-1073741801;
      v14 = v10 + 40;
    }
    if ( v11 != 8 )
    {
      if ( v14 + v11 < v14 )
        return (unsigned int)-1073741801;
      v14 += v11;
    }
    Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1310720, v14);
    v16 = (_BYTE *)Heap;
    if ( Heap )
    {
      v17 = Heap + 40;
      if ( v10 != 8 )
      {
        v28 = Heap + 40;
        v17 += v10;
        Acl = RtlCreateAcl(Heap + 40, v10, 2);
        if ( Acl < 0 )
          goto LABEL_48;
      }
      if ( v11 != 8 )
      {
        v29 = v17;
        Acl = RtlCreateAcl(v17, v11, 2);
        if ( Acl < 0 )
          goto LABEL_48;
      }
      v7 = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1310720, v6);
      if ( v7 )
      {
        v18 = 0;
        if ( a2 )
        {
          v19 = (unsigned __int8 ***)(a1 + 8);
          while ( 1 )
          {
            v20 = 0LL;
            v21 = **v19;
            v22 = 4 * v21[1] + 8;
            if ( !*((_BYTE *)v19 - 8) )
              break;
            if ( *((_BYTE *)v19 - 8) == 1 )
            {
              v23 = *((_DWORD *)v19 - 1);
              v24 = *((_BYTE *)v19 - 6);
              v25 = *((_BYTE *)v19 - 7);
              *(_BYTE *)v7 = 1;
              goto LABEL_22;
            }
            if ( *((_BYTE *)v19 - 8) != 2 )
              goto LABEL_24;
            v23 = *((_DWORD *)v19 - 1);
            v24 = *((_BYTE *)v19 - 6);
            v25 = *((_BYTE *)v19 - 7);
            v20 = v29;
            *(_BYTE *)v7 = 2;
LABEL_23:
            *(_DWORD *)(v7 + 4) = v23;
            *(_BYTE *)(v7 + 1) = v24 | v25;
            v22 += 12;
            *(_WORD *)(v7 + 2) = v22;
            Acl = RtlCopySid(4 * (unsigned int)v21[1] + 8, (void *)(v7 + 8), v21);
LABEL_24:
            if ( Acl < 0 )
              goto LABEL_48;
            Acl = RtlAddAce(v20, 2u, 0xFFFFFFFF, (char *)v7, v22);
            if ( Acl < 0 )
              goto LABEL_48;
            ++v18;
            v19 += 2;
            if ( v18 >= a2 )
              goto LABEL_27;
          }
          v23 = *((_DWORD *)v19 - 1);
          v24 = *((_BYTE *)v19 - 6);
          v25 = *((_BYTE *)v19 - 7);
          *(_BYTE *)v7 = 0;
LABEL_22:
          v20 = v28;
          goto LABEL_23;
        }
LABEL_27:
        Acl = RtlCreateSecurityDescriptor(v16, 1);
        if ( Acl >= 0 )
        {
          Acl = RtlSetOwnerSecurityDescriptor((__int64)v16, a3, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetGroupSecurityDescriptor((__int64)v16, a4, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor((__int64)v16, 1, v28, 0);
              if ( Acl >= 0 )
              {
                LOBYTE(v26) = v29 != 0;
                Acl = RtlSetSaclSecurityDescriptor(v16, v26, v29, 0LL);
                if ( Acl >= 0 )
                {
                  Acl = 0;
                  *a5 = v16;
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
      else
      {
        Acl = -1073741801;
      }
LABEL_48:
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v16);
LABEL_33:
      if ( v7 )
        RtlFreeHeap((__int64)ProcessHeap, 0, v7);
      return (unsigned int)Acl;
    }
    return (unsigned int)-1073741801;
  }
  v12 = a1;
  while ( !*(_BYTE *)v12 || *(_BYTE *)v12 == 1 )
  {
    v13 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v12 + 8) + 1LL) + 20;
    if ( v13 + v10 < v10 )
      return (unsigned int)-1073741801;
    v10 += v13;
LABEL_6:
    if ( v6 <= v13 )
      v6 = v13;
    ++v8;
    v12 += 16LL;
    if ( v8 >= a2 )
      goto LABEL_9;
  }
  if ( *(_BYTE *)v12 == 2 )
  {
    v13 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v12 + 8) + 1LL) + 20;
    if ( v13 + v11 < v11 )
      return (unsigned int)-1073741801;
    v11 += v13;
    goto LABEL_6;
  }
  return 3221225485LL;
}
