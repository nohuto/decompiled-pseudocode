/*
 * XREFs of AcpiIoctlCleanupArgumentObjects @ 0x1C0028D5C
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001B138 (ACPIIoctlEvalControlMethod.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C0028D5C (AcpiIoctlCleanupArgumentObjects.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C005088C (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C0028D5C (AcpiIoctlCleanupArgumentObjects.c)
 */

void __fastcall AcpiIoctlCleanupArgumentObjects(__int64 a1, unsigned int a2)
{
  unsigned int **v2; // rbx
  __int64 v3; // rsi
  unsigned int *v4; // rdi
  __int64 v5; // rdx

  if ( a1 && a2 )
  {
    v2 = (unsigned int **)(a1 + 32);
    v3 = a2;
    do
    {
      if ( *((_WORD *)v2 - 15) == 4 )
      {
        if ( *((_DWORD *)v2 - 2) )
        {
          v4 = *v2;
          if ( *v2 )
          {
            v5 = *v4;
            if ( (_DWORD)v5 )
            {
              AcpiIoctlCleanupArgumentObjects(v4 + 2, v5);
              ExFreePoolWithTag(v4, 0x41706341u);
              *v2 = 0LL;
            }
          }
        }
      }
      v2 += 5;
      --v3;
    }
    while ( v3 );
  }
}
