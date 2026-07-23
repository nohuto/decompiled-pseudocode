/*
 * XREFs of RtlpGenerateInheritAcl @ 0x1404C05B0
 * Callers:
 *     RtlpInheritAcl2 @ 0x1404BE9E0 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x140087840 (RtlFindAceByType.c)
 *     RtlpGenerateInheritedAce @ 0x1404C0780 (RtlpGenerateInheritedAce.c)
 */

__int64 __fastcall RtlpGenerateInheritAcl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING a8,
        __int64 a9,
        int a10,
        int a11,
        char a12,
        _DWORD *a13,
        PACL Acl,
        _BYTE *a15)
{
  unsigned __int16 *v15; // rbx
  int v16; // edi
  unsigned int v17; // esi
  unsigned int v19; // ebp
  __int64 result; // rax
  char v21; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+74h] [rbp-54h] BYREF
  __int64 v23[10]; // [rsp+78h] [rbp-50h] BYREF
  char v24; // [rsp+D0h] [rbp+8h]

  v15 = (unsigned __int16 *)(a1 + 8);
  v16 = 0;
  v24 = 0;
  v17 = 0;
  v19 = 0;
  *a15 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)v15 == 17 )
      {
        if ( a11 == 3 )
        {
          if ( RtlFindAceByType(Acl, 0x11u, 0LL) )
          {
LABEL_12:
            if ( !v24 )
              break;
LABEL_20:
            result = 3221225507LL;
            *a13 = v17 + v16;
            return result;
          }
LABEL_4:
          result = RtlpGenerateInheritedAce(
                     v15,
                     a5,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     (__int64)&v22,
                     (__int64)Acl,
                     (__int64)v23,
                     (__int64)&v21);
          if ( (_DWORD)result == -1073741789 )
          {
            v24 = 1;
          }
          else if ( (int)result < 0 )
          {
            return result;
          }
          if ( v21 )
            *a15 = 1;
          v16 += v22;
          if ( v22 > v17 || (v17 -= v22, v17 <= LODWORD(v23[0])) )
            v17 = v23[0];
        }
      }
      else if ( a11 != 3 )
      {
        goto LABEL_4;
      }
      ++v19;
      v15 = (unsigned __int16 *)((char *)v15 + v15[1]);
      if ( v19 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_12;
    }
  }
  if ( a12 )
    goto LABEL_20;
  *a13 = v16;
  return 0LL;
}
