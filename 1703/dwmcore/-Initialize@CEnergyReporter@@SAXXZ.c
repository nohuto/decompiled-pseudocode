/*
 * XREFs of ?Initialize@CEnergyReporter@@SAXXZ @ 0x1800C6ED4
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800C6E38 (-Startup@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void CEnergyReporter::Initialize(void)
{
  char v0; // al
  char SystemInformation; // [rsp+30h] [rbp+8h] BYREF

  SystemInformation = 0;
  if ( NtQuerySystemInformation(SystemMirrorMemoryInformation|0x80, &SystemInformation, 1u, 0LL) >= 0 )
  {
    v0 = CEnergyReporter::s_reportingEnabled;
    if ( SystemInformation )
      v0 = 1;
    CEnergyReporter::s_reportingEnabled = v0;
  }
}
