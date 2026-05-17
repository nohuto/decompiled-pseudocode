/*
 * XREFs of sub_180044394 @ 0x180044394
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlEqualSid @ 0x1800442A0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x18009CED0 (ZwOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x18009D0B0 (ZwPrivilegeCheck.c)
 */

char __fastcall sub_180044394(__int64 a1, _WORD *a2, char a3, int *a4)
{
  char v4; // bl
  void *ProcessHeap; // r13
  int v9; // eax
  int v11; // eax
  unsigned int *Heap; // r14
  unsigned int v13; // edi
  _WORD **v14; // r15
  int v15; // eax
  int v16; // eax
  char v17; // cl
  char v18[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-85h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v21; // [rsp+48h] [rbp-71h]
  _DWORD v22[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h]
  int v24; // [rsp+60h] [rbp-59h]
  _WORD *v25; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  v21 = a1;
  if ( a2 )
  {
    if ( a3 )
    {
      v15 = ZwOpenProcessToken(-1LL, 8LL, v20);
      *a4 = v15;
      if ( v15 < 0 )
        return 0;
    }
    else
    {
      v20[0] = a1;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = ZwQueryInformationToken(v20[0], 1LL, &v25, 84LL, &v19);
    *a4 = v9;
    if ( v9 >= 0 )
    {
      if ( RtlEqualSid(a2, v25) )
      {
        if ( a3 )
          ZwClose(v20[0]);
        return 1;
      }
      v11 = ZwQueryInformationToken(v20[0], 2LL, 0LL, 0LL, &v19);
      *a4 = v11;
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
      {
        Heap = (unsigned int *)RtlAllocateHeap((__int64)ProcessHeap, 0, v19);
        if ( Heap )
        {
          *a4 = ZwQueryInformationToken(v20[0], 2LL, Heap, v19, &v19);
          if ( a3 )
            ZwClose(v20[0]);
          if ( *a4 >= 0 )
          {
            v13 = 0;
            if ( !*Heap )
              goto LABEL_30;
            v14 = (_WORD **)(Heap + 2);
            while ( !RtlEqualSid(a2, *v14) )
            {
              ++v13;
              v14 += 2;
              if ( v13 >= *Heap )
                goto LABEL_30;
            }
            if ( (Heap[4 * v13 + 4] & 0x18) != 8 )
            {
LABEL_30:
              RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
              v20[1] = 18LL;
              v23 = 18LL;
              v22[0] = 1;
              v22[1] = 1;
              v24 = 0;
              v16 = ZwPrivilegeCheck(v21, v22, v18);
              v17 = v18[0];
              if ( v16 < 0 )
                v17 = 0;
              if ( v17 )
                return 1;
              *a4 = -1073741734;
              return 0;
            }
            v4 = 1;
          }
          RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
          return v4;
        }
        *a4 = -1073741801;
      }
    }
    if ( a3 )
      ZwClose(v20[0]);
  }
  else
  {
    *a4 = -1073741734;
  }
  return 0;
}
