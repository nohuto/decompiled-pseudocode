/*
 * XREFs of StorSqmInitialize @ 0x1C001AC80
 * Callers:
 *     RaInitializeDriver @ 0x1C006093C (RaInitializeDriver.c)
 * Callees:
 *     <none>
 */

__int64 StorSqmInitialize()
{
  NTSTATUS v1; // [rsp+30h] [rbp+8h]

  if ( byte_1C0055699 )
    return 3221225701LL;
  v1 = EtwRegister(&StorSqmProvider, 0LL, 0LL, &qword_1C00556C8);
  byte_1C0055699 = v1 >= 0;
  if ( v1 >= 0
    && (!EtwProviderEnabled(qword_1C00556C8, 0, 0LL)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_START_SESSION)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_END_SESSION)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_SET_DWORD)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_INCREMENT_DWORD)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_ADDTOAVERAGE_DWORD)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_SETIFMAX_DWORD)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_SETIFMIN_DWORD)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_SET_STRING)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_SET_DWORD64)
     || !EtwEventEnabled(qword_1C00556C8, &SQM_ADD_STREAMROW_EX)) )
  {
    v1 = -1073741637;
  }
  if ( v1 < 0 )
  {
    if ( byte_1C0055699 )
    {
      EtwUnregister(qword_1C00556C8);
      byte_1C0055699 = 0;
    }
  }
  return (unsigned int)v1;
}
