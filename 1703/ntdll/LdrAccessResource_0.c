/*
 * XREFs of LdrAccessResource_0 @ 0x1800380F8
 * Callers:
 *     RtlFindMessage @ 0x180037F80 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x180038290 (LdrAccessResource.c)
 *     RtlLoadString @ 0x1800753A0 (RtlLoadString.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_18002FEC4 @ 0x18002FEC4 (sub_18002FEC4.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_1800E1AD8 @ 0x1800E1AD8 (sub_1800E1AD8.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

__int64 __fastcall LdrAccessResource_0(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebp
  unsigned __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+80h] [rbp+8h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v17 = 2147353476LL;
    sub_1800E2008(L",.", *(unsigned __int8 *)v17);
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((unsigned int **)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    a1 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    v13 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v14 = sub_180032C0C(a1, 1, 2u, &v22, (__int64 *)&v20);
    v16 = v20;
    if ( v14 < 0 )
      v16 = 0LL;
    if ( !v16 )
    {
      v11 = -1073741687;
      goto LABEL_11;
    }
    if ( (unsigned __int64)a2 < v16 )
      goto LABEL_30;
    v11 = sub_18002FEC4(a1, &v19);
    if ( v11 == -1073741701 )
      goto LABEL_11;
    if ( v19 && ((unsigned __int64)a2 < v13 || (unsigned __int64)a2 >= v13 + v19) )
    {
LABEL_30:
      v18 = sub_1800E1AD8(a1, v15, a2, &v21);
      if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        a1 = v18;
    }
  }
  v11 = sub_18002FC7C(a1, a2, a3, a4);
LABEL_11:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    sub_1800E2008(L"*,", *(unsigned __int8 *)v10);
  }
  return v11;
}
